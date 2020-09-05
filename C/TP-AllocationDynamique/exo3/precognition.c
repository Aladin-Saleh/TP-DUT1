#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{


int i,j = 0;
int *reel = NULL;
int test = 1;


    
    
    reel = malloc(i * sizeof(int));


  
    


    while(test != 0)
    {
        printf(" test : %d \n ",test);
        printf("Entre reel :");

        if (scanf("%d",&reel[j]) == 0)
        {
            
            
            test =0;
        }
        else
        {
            //printf("%d",reel[j]);
            j++;
            
            //printf("%d",j);
            reel = realloc(reel,j*sizeof(int));
            

        }
        
        
    }

   for ( i = 0; i < j; i++)
   {
       printf("%d\n",reel[i]);
   }
   
   free(reel);

    return 0;
}
