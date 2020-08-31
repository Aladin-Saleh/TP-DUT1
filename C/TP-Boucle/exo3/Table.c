#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int entier;
    int resultat;
    int i;

    printf("Afficher la table de quel entier ? : \n");
    scanf("%d",&entier);
    
    for(i = 0; i <= 10; ++i )
    {
        resultat = entier*i;
        printf("%d x %d = %d \n",entier,i,resultat);
    }
    return 0;
}
