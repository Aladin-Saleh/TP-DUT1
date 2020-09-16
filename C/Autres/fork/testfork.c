#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char const *argv[])
{
	

 	pid_t fils;
 	pid_t fils2;


 	fils = fork();

	if (fils == 0) 
	{
		printf("Procéssus fils : pid = %d, fork renvoi %d\n",getpid(),fils);//Est éxecuté apres le wait()
		printf("Spécifique au fils\n");
		printf("wait dans le processus fils: %d\n", wait(NULL));//Doit valeur -1 car ce processus n'a pas de fils
		printf("Ceci est un texte qui provient de processus fils\n");




	}
	else
	{
		printf("Procéssus père : pid = %d, fork renvoi %d\n",getpid(),fils);

		printf("wait: %d\n", wait(NULL));//La valeur de retour de wait est -1 si il n'y a pas de fils, sinon c'est le PID du fils qui est renvoyé 
		//wait() met le processus père (celui qui appelle) "en pause" tant que le processus fils n'est pas "fini"
		printf("Le Procéssus fils est normalement terminer ! \n");//Cette ligne est executé après le processus fils
	}








	return 0;
}