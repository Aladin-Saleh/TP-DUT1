#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i,score = 0;
    char buffer[3];

    FILE *fichier = NULL;
    fichier = fopen("top10","r+");

    if (fichier == NULL)
    {
        printf("Error : Impossible d'ouvrir le fichier !");
        exit(1);
    }
    else
    {
        printf("Success : Ouverture du fichier reussi !\n");

        for (i = 0; i <= 10; i++)
        {
           fread(&score,sizeof(int),1,fichier);
           fread(&buffer,sizeof(char),3,fichier);
           printf("\n%0.3d %s\n",score,buffer);
           score = 0;
        }
        


        fclose(fichier);
    }
    
    



    return 0;
}
