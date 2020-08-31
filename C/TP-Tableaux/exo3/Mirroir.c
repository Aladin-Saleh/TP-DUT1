#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 50
#define MIN -50


int main(int argc, char const *argv[])
{
    int tableau[10];
    int ind =10;
    srand(time(NULL));

    for (int i = 0; i < 10; i++)
    {
        tableau[i] = rand() % (MAX - MIN - 1) + (-50);
    }
    
    printf("---------+--------+--------+--------+--------+--------+--------+--------+--------+--------+\n");
    printf("|");
    for (int u = 0; u < 10; u++)
    {
        printf("%7d |",tableau[u]);
    }
    printf("\n---------+--------+--------+--------+--------+--------+--------+--------+--------+--------+\n");


     printf("---------+--------+--------+--------+--------+--------+--------+--------+--------+--------+\n");
    printf("|");
    for (int m = 0; m <10; m++)
    {
        ind--;
        printf("%7d |",tableau[ind]);
    }
    printf("\n---------+--------+--------+--------+--------+--------+--------+--------+--------+--------+\n");
    

    return 0;
}
