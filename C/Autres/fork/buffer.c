#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	


	printf("Bonjour le monde !");
	if (fork())
	{
		printf("Au revoir\n");
	}









	return 0;
}