#include <stdio.h>
#include <stdlib.h>

typedef struct Taille Taille;
struct Taille
{
    int a;
    char v;
    int c;
};



int main(int argc, char const *argv[])
{
    Taille a;
    printf("%zu",sizeof(a));


    return 0;
}
