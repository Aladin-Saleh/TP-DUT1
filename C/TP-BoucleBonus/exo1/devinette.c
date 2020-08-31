#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
    
    int entier_secret;
    int entier_user;
    int i;


    srand(time(NULL));

    entier_secret = rand() % (500 - 1) +1;

    

    for ( i = 0; i <= 5; i++)
    {
        printf("Deviner l'entier : \n");
        scanf("%d",&entier_user);

        if (entier_user > entier_secret)
        {
            printf("C'est moins ! \n");
        }
        else if(entier_user < entier_secret)
        {
            printf("C'est plus ! \n");
        }
        
        

        if (entier_user == entier_secret)
        {
            printf("Vous avez trouver l'entier ! ");
            break;
        }
        
        
    }

    printf("Perdu ! Vous n'avez pas trouver l'entier :( \nIl s'agissait de %d",entier_secret);
    
    

    return 0;
}
