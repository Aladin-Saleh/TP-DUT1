#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int note;

    printf("Quelle est votre note du bac ? : \n");
    scanf("%d",&note);


    if(note < 10 )
    {
        printf("Tu n'a pas le bac ! \n");

    
    }
    else if( note < 12)
    {
        printf("Tu n'a pas de mention :( \n");

    }
     else if( note < 14)
    {
        printf("Tu a la mention AB :) \n");

    }
    else if( note < 16)
    {
        printf("Tu a la mention B :) \n");

    }
    else if( note < 20)
    {
        printf("Tu a la mention TB :) \n");

    }

    return 0;
}
