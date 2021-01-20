#include <stdio.h>
#include <stdlib.h>



void multiplier5(int* i)
{
    
    *i= *i * 5;
}

void remplir_tableau(int* i)
{
    for (int j = 0; j < 10; j++)
    {
        *(i+j) = j*2;
        /*
        * *(i+j) <=> i[j]
        */
    }
    
}

int main(int argc, char const *argv[])
{
    int entier = 5;
    int tableau[10];

    printf("Avant : A : %d\n",entier);
    multiplier5(&entier);
    printf("Apres : A : %d\n",entier);
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",tableau[i] = 0);
    }
    remplir_tableau(tableau);
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",tableau[i]);
    }






    return 0;
}
