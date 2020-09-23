#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

#define MAXARGS 128
#define MAXLINE 80
#define FOREVER while(1)

extern char **environ;

void eval(char *cmdline);
int parseline(char *buf, char **argv);
int builtin_cmd(char **argv);

int main() {
	char cmdline[MAXLINE];
	
	FOREVER {//Equivalent à un while(1)
		printf("> ");
		fgets(cmdline, MAXLINE, stdin);//Récupere la commande que l'on tape dans le tablo cmdline
		if (feof(stdin)) exit(0);//si il reste des octects à lire dans l'entrée standard
		
		eval(cmdline);//On donne l'entrée stocker dans le tableau
	}
		return EXIT_SUCCESS;
}


void eval(char *cmdline) {
	char *argv[MAXARGS];//
	char buf[MAXLINE];//buffer
	int bg;
	pid_t pid;
	
	strcpy(buf, cmdline);//On copie le tableau cmdLine dans buf
	bg = parseline(buf, argv);
	if (argv[0] == NULL) {//Si on ne lit rien
		return;
	}
	
	if (!builtin_cmd(argv)) {//On compare les entrée avec quit
		if ((pid = fork()) == 0) {
			if (execvp(argv[0], argv) < 0) {
				printf("%s: cette commande n'existe pas.\n", argv[0]);
				exit(0);
			}
		}
		
		if (!bg) {// Si c'est pas lancé en background alors on attend la fin du fils 
			int status;
			if (waitpid(pid, &status, 0) < 0) {
				perror("waitfg: waitpid error"); exit(0);
			}
		}
		else {
			printf("%d %s", pid, cmdline);
		}
	}
	return;
}

int builtin_cmd(char **argv) {
	if (!strcmp(argv[0], "quit"))//si l'entrée est differente de "quit" alors on fait un exit 0
		exit(0);
	if (!strcmp(argv[0], "&"))
		return 1;
	return 0;
}

/*Cette fonction isole les commandes,les options et les argument dans argv*/
int parseline(char *buf, char **argv) {//prend un buffer et un tableau d'argument
	char *delim;
	int argc;
	int bg; 
	
/*buf = "    ls    -l"*/
	buf[strlen(buf)-1] = ' ';//Met ' ' à la fin du buffer
	while (*buf && (*buf == ' ')) {//si buf n'est pas vide donc pointe vers qlq chose ET si il y'a un espace 
		buf++;//On incrémente l'adresse du buffer
	}//se met à lire au premier caractere en ignorant les espaces ''
	
	argc = 0;
	while ((delim = strchr(buf, ' '))) {//On cherche le premier espace '' dans buf et stocke l'adresse dans delim,donc delim pointe au premiere espace''
		argv[argc++] = buf;//O
		*delim = '\0';
		buf = delim+1;
		while (*buf && (*buf == ' ')) buf++;
	}
	argv[argc] = NULL;//On met null à la fin pour designer la fin 
	
	if (argc == 0) return 1;
	
	if ((bg = (*argv[argc-1] == '&')) != 0) {//Si bg vaut 1 si '&' est lu sinon bg vaut 0, si '&' est le dernier caractere
		argv[--argc] = NULL;//On decale la fin du tableau pour pas considerer le '&'
	}
	
	return bg;	
}