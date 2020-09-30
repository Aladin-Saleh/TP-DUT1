#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>



char *argmnt[1];

int main(int argc, char const *argv[])
{
    argmnt[0] ="test";
    argmnt[1] = NULL;
    
    pid_t fils;
    pid_t fils2;
       // execvp("ls",argmnt);

    int status;

    printf("Start : pid %d \n",getpid() );


  /*
   if ((fils = fork()) == 0)//Code executé par le fils 
   {

       // execvp("ls",argmnt);

        printf("Fils : pid %d Pere : pid %d \n",getpid(),getppid());
        execl("oki","oki",NULL);
   }
   else
   {    printf("WAIT : %d\n",wait(NULL));//Retourne le pid du processus fils que l'on attend
        printf("Papa\n");

   }
   */

    fils = fork();

    fils2 = fork();

    if (fils2 == 0 )
    {
         printf("Fils2 : pid %d Pere : pid %d \n",getpid(),getppid());
         sleep(1);  
                   
    }
     if (fils == 0)
    {
         printf("Fils : pid %d Pere : pid %d \n",getpid(),getppid());
    }
    else
    {
        printf("WAIT : %d\n",wait(NULL) );// retourne le pid du premier processus qui se termine 
    }



    return 0;
}
