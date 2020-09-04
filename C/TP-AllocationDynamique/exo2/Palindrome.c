    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>

    char* inverse(const char* s)
    {
    	int i=0,j=0;
    	char* tab = NULL;
    	char keep = '\0';

    	tab = (char*) calloc(strlen(s),sizeof(char));
    	strcpy(tab,s);
    	printf("%s test\n",tab);
    	j = strlen(tab);

    	if(j%2 != 1)
    	{
    		for(i = 0; i <= strlen(tab)/2 ; i++,j--){
    			keep = tab[j-1];
    			tab[j-1] = tab[i];
    			tab[i] = keep;
    		}
    	}else if(j%2 ==1)
    	{
    		for(i = 0;i < strlen(tab)/2; i++,j--){
    			keep = tab[j-1];
    			tab[j-1] = tab[i];
    		 	tab[i] = keep;
    		}
    	}	
    	return tab;
    }

    int main(int argc, char * argv[]){
    	char* debut = NULL;
    	char* fin = NULL;
    	int i = 0;


    	for (i = 1; i < argc; ++i)
    	{
    		debut = argv[i];
    		fin = inverse(argv[i]);

    		if(strcmp(debut,fin)== 0)
    		{
    			printf("%s est un pallindrome\n",debut);
    		}
    		else{
    			printf("%s n'est pas un pallindrome\n",debut);
    		}
    	}
    	return EXIT_SUCCESS;
    }
