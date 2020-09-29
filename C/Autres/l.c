#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

    char *tablo[1];


int main(void)
{

tablo[0] = "";
tablo[1] = NULL;

    pid_t fils;
    
printf("Lancement programme \n");


/*
fils = fork();

       
            printf("papa : %d, fils : %d \n",getppid(),getpid());
            
                wait();

            if (fils == 0)
            {   //Si le execl est executé via un processus fils il est important de faire appel à wait
                execl("ok","ok","ok\n");
            }*/
            
            

        
            
        

            execvp("/bin/ls",tablo);


    return EXIT_SUCCESS;
}