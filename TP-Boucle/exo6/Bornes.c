#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int entierG = 0;
    int entierP;
    int entier;
    int i;


    while(entier >= 0)
    {
        printf("Entrer un entier\n");
        scanf("%d",&entier);

        if (entier > entierG)
        {
            entierG = entier;
        }
        else
        {

            if (entier < entierP && entier > 0)
            {
                entierP = entier;
            }
        }
        if (entier < 0)
        {
            printf("%d est l'entier le plus petit\n",entierP);
            printf("%d est l'entier le plus grand \n",entierG);
            printf("Fin du programme !");
            break;
        }
        
        
    }


    return 0;
}
