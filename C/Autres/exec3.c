#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define R 0
#define W 1

void exec_with_pipe(int pipes[], char* argv[]);

int main(int argc, char **argv) {
    int alors_pos = 0;
    int sinon_pos = 0;
    int pipes[256]; // { 0, 0, ... }
    int i = 0;

    int status;

    while(argv[++i] != NULL)
        if (!strcmp(argv[i],"alors"))
            alors_pos = i;
        else if(!strcmp(argv[i],"sinon"))
            sinon_pos = i;
        else if(!strcmp(argv[i], "|"))
            pipes[i] = 1;

    argv[alors_pos] = NULL;
    if (sinon_pos)
        argv[sinon_pos] = NULL;

    if(!(alors_pos)) {
        printf("Syntaxe : ./si expr alors expr [sinon expr]\n");
        return -1;
    }

    if(fork()==0) { 
        execvp(argv[1], &argv[1]); 
        perror("execvp cassé !"); 
        return -1;
    }

    wait(&status);
    if(WIFEXITED(status)) {
        if(!WEXITSTATUS(status)) {
            exec_with_pipe(&pipes[alors_pos], &argv[alors_pos]);
            wait(&status);
        } else if (sinon_pos) {
            exec_with_pipe(&pipes[sinon_pos], &argv[sinon_pos]);
            wait(&status);
            wait(&status);
        }

    } 
}

void exec_with_pipe(int pipes[], char* argv[]) {
    int argv_len = 0;
    while (argv[argv_len] != NULL) { argv_len++; }

    for (int i = 0; i < argv_len; ++i) {
        if (pipes[i]) {
            argv[i] = NULL;

            if(fork()==0) { 
                execvp(argv[0], &argv[0]); 
                perror("execvp cassé !"); 
            }

            // reset iteration
            argv = &argv[i];
            argv_len -= i;
            i = 0;
        }
    }
}
