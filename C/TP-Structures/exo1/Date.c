#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[])
{
    int j,m,a;
    time_t ajd;
    time(&ajd);


    struct tm *local =localtime(&ajd);

    j =local->tm_mday;
    m =local->tm_mon +1;
    a =local->tm_year+1900;

    printf("%d : %d : %d ",j,m,a);

    return 0;
}
