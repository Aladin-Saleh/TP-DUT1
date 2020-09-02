#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

int nmbr_Reel , i ,j;
int *reel = NULL;


    printf("Combien de réel voulez vous entrer ? : ");
    scanf("%d",&nmbr_Reel);

    reel = malloc(nmbr_Reel * sizeof(int));

    if (reel == NULL)
    {
        exit(0);
    }
    

    for ( i = 0; i < nmbr_Reel; i++)
    {
        printf("Entrer votre reel : ");
        scanf("%d",&reel[i]);
    }

        printf("Vos reel : \n");

    for ( j = 0; j < nmbr_Reel; j++)
    {
        printf("%d\n",reel[j]);
    }
    
    
    free(reel);

    return 0;
}
