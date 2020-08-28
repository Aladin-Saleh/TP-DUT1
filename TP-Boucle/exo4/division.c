#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int entier1;
    int entier2;
    int multiplication;
    int addition;
    int i,j;
    
    printf("Entrer un entier positive ou nulle ( >=0 ) : ");
    scanf("%d",&entier1);

    printf("Entrer un entier positive strictement ( > 0 ) : ");
    scanf("%d",&entier2);

    for (i = 0; i < 10; i++)
    {
        multiplication = entier2 * i;
        if (multiplication == entier1)
        {
            printf("%d x %d + 0 = %d \n",entier2,i,entier1);
            break;
        }
        
        for (j = 0; j < 10; j++)
        {
            addition = multiplication + j;
            if (addition == entier1)
            {

                printf("%d x %d + %d = %d \n",entier2,i,j,entier1);
                break;                
            }
            
        }
        
    }
    



    return 0;
}
