#include <stdio.h>
#include <stdlib.h>
#define CONST 10

int main(int argc, char const *argv[])
{
    int i,j,u;

    printf("X      |");
    for(i = 0; i <= 10;++i)
    {
        printf("%6d",i);
    }
    printf("\n------+-----------------------------------------------------------------------\n");

    for ( j = 0; j <= CONST; j++)
    {
        printf("%2d      |",j);

        for ( u = 0; u <= CONST; u++)
        {
            printf("%6d",u*j);
        }
        printf("\n");
        
        
    }
    



    return 0;
}
