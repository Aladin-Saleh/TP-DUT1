#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int entier1;
    int result;
    int i;

while(entier1 >= 0)
{
        printf("Afficher la table de quel entier ? : ");
        scanf("%d",&entier1);

    if (entier1 < 0)
    {
        printf("Fin du programme ! \n");
        break;
    }
    else
    {
        
    
    
    
  

    
        for ( i = 0; i <= 10; i++)
            {
                result = entier1*i;
                printf("%d x %d = %d \n",entier1,i,result);
            }
    
    }

}
    

    
    

    return 0;
}
