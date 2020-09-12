#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char const *argv[])
{
    
	int lecture,ecriture;
	int rd,wrt;
	int taille_texte = 0;
	char buf[10];
	pid_t fils;

	lecture = open("texte.txt",O_RDONLY);
	ecriture = open("texte_vide.txt",O_RDWR);

		if (lecture == -1 || ecriture == -1)
		{
			printf("Erreur :L'ouverture a échoué ! \n");
			exit(1);
		}
		else
		{
			printf("Succes : Ouverture réussi !\n");
			

				while(1)
				{
					rd = read(lecture,&buf,1);
					taille_texte++;
					printf("%d\n",taille_texte );
					if (rd <= 0)
					{
						break;
					}
				}
				close(lecture);

				

				lecture = open("texte.txt",O_RDONLY);

				if (fork())
				{
					for (int i = 0; i < 10; ++i)
				{
					rd = read(lecture,&buf,1);
					wrt = write(ecriture,&buf,1);
				}
				}

				for (int i = 0; i < (taille_texte/2)-5; ++i)
				{
					rd = read(lecture,&buf,1);
					wrt = write(ecriture,&buf,1);
				}

		}
			close(lecture);
    
    return 0;
}