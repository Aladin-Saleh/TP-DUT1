#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int entier1;
    int entier2;
    int i;

    printf("Entrer un entier : \n");
    scanf("%d",&entier1);
    printf("Entrer un entier plus grand que le précédent : \n");
    scanf("%d",&entier2);

    printf("Voici les chiffres compris entre vos entier : ");

    for(i = 0; i < entier2; i++)
    {
        entier1++;
        printf("%d\n",entier1);
    }

    return 0;
}
