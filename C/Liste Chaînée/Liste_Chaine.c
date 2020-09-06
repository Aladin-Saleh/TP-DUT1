#include <stdio.h>
#include <stdlib.h>

typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant;
};

typedef struct Liste Liste;
struct Liste
{
    Element *premier;
};
/*
Cette structure Liste contient un pointeur vers le premier élément de la liste. 
En effet, il faut conserver l'adresse du premier élément pour savoir où commence la liste.
Si on connaît le premier élément,
on peut retrouver tous les autres en « sautant » d'élément en élément à l'aide des pointeurs suivant.
*/

Liste *initialisation()
{
    Liste *liste = malloc(sizeof(Liste*));
    Element *element = malloc(sizeof(Element*));

    if (liste == NULL || element == NULL)
    {
        exit(EXIT_FAILURE);
    }

    element->nombre = 0;
    element->suivant = NULL;//Le dernier element est toujours NULL, et comme element est le seul element il est le dernier
    liste->premier = element;

    return liste;
}

void insertion(Liste *liste, int nvNombre)
{
    /* Création du nouvel élément */
    Element *nouveau = malloc(sizeof(*nouveau));
    if (liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }
    nouveau->nombre = nvNombre;

    /* Insertion de l'élément au début de la liste */
    nouveau->suivant = liste->premier;
    liste->premier = nouveau;
}

void suppression(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    if (liste->premier != NULL)
    {
        Element *aSupprimer = liste->premier;
        liste->premier = liste->premier->suivant;
        free(aSupprimer);
    }
}


void afficherListe(Liste *liste)
{
    if (liste == NULL)
    {
        exit(EXIT_FAILURE);
    }

    Element *actuel = liste->premier;

    while (actuel != NULL)
    {
        printf("%d -> ", actuel->nombre);
        actuel = actuel->suivant;
    }
    printf("NULL\n");
}

int main(int argc, char const *argv[])
{
    Liste *maListe = initialisation();

    insertion(maListe,5);
    insertion(maListe,15);
    insertion(maListe,25);

    suppression(maListe);

    afficherListe(maListe);


    return 0;
}
