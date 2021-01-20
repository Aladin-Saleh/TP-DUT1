#include <stdio.h>
#include <stdlib.h>


int multiplication(int val);
int utilisation_pointeur_fonction(int val,int (*pointeur_fonction)(int));


int main(int argc, char const *argv[])
{

    void* pointeur_valeur = NULL;
    int entier = 16;
    float nombre_or = 1.618f;
    char* nom[] = {"Aladin","Saleh"};
    char lettre = 'A';
    int tableau[] = {1,2};

    pointeur_valeur = &entier;
    printf("%d\n",*((int*)pointeur_valeur));
    pointeur_valeur = &nombre_or;
    printf("%.2f\n",*((float*)pointeur_valeur));
    pointeur_valeur =&nom;
    printf("%s\n",*((char**)pointeur_valeur));
    printf("%s\n",*((char**)pointeur_valeur+1));//L'indice nom[1];, ici il est egale à "Saleh"
    pointeur_valeur =&lettre;
    printf("%c\n",*((char*)pointeur_valeur));
    pointeur_valeur =&tableau;
    printf("%d\n",*((int*)pointeur_valeur));
    printf("%d\n",*((int*)pointeur_valeur+1));


    /*
    *---------------------------------- 
    *         POINTEUR DE FONCTION 
    *----------------------------------
    */


   printf("%d\n",utilisation_pointeur_fonction(5,multiplication));
    
    return 0;
}

   
int utilisation_pointeur_fonction(int val,int (*pointeur_fonction)(int))
{
    pointeur_fonction(val);
}

int multiplication(int val)
{
   return val * 5;
}