#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char  *argv[])
{
    int i;
    char stockage;
    


   FILE *fichier = NULL;
   fichier = fopen("top10","r+");

     if (fichier == NULL)
    {
        printf("Error : Impossible d'ouvrir le fichier !");
        exit(1);
    }
    else
    {
        printf("Success : Ouverture reussi !\n");

         if (argc != 3)
            {
                printf("Entrer un score (int) et un pseudo de 3 caractère (char) !");
                exit(1);
            }
            else
            {
                   
                    fwrite(&argv[1],sizeof(int),1,fichier);
                
                
            }
            
    }
    

   


    
        
    
    
    return 0;
}
