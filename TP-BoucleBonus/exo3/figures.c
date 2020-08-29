#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,u,l;
    int choix = 0;
    int hauteur;


  

    while(1)
    {

        
            printf("____________\n");
            printf("1)Triangle\n2)Carre\nq)Quitter\n");
            scanf("%d",&choix);
            
            if (choix == 1)
            {
                printf("Hauteur du triangle \n");
                scanf("%d",&hauteur);
                
                for ( i = 0; i <= hauteur; i++)
                {
                    for(j = 0; j<= i; j++)
                    {
                        printf("*");
                    }
                     printf("\n");
                }
                
            }

            else if (choix == 2)
            {
                printf("Hauteur du carre \n");
                scanf("%d",&hauteur);

                for (u = 0; u < hauteur; u++)
                {
                        for ( l = 0; l < hauteur; l++)
                        {
                            printf("*");

                        }
                            printf("\n");
                            
                            

                        
                    
                }
                
                
                
                
            }
            else
            {
                break;
            }
            
        
       
        
            
            
                
            
            

            
            


            
    }

    printf("Au revoir ...");

    return 0;
}

