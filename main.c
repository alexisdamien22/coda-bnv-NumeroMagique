#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int max_bot = 100;
	int min_bot = 1;
	int random_number = rand() % max_bot + min_bot;
	int i;
	char term;
	int t = 0;
	int i_bot = 0;
	int t_bot = 0;
	while(i != random_number)
	{
		printf("Choisissez un nombre entre 1 et 100:\n");
		if(scanf("%d%c", &i, &term) != 2 || term != '\n')
		{
			printf("Nombre invalide\nArrêt du programme...\n");
			exit(0);
		}
		else
		{
			if(i > random_number)
			{
				printf("C'est moins !\n");
				t++;
			}
				else if(i < random_number)
        	        {
                	        printf("C'est plus !\n");
                   	        t++;
        	       	}
			else if(i == random_number)
        	        {
				while(i_bot != random_number)
				{
					i_bot = (max_bot + min_bot) / 2;
					if(i_bot > random_number)
                	{
                        t_bot++;
						max_bot = i_bot;
                    }
                    else if(i_bot < random_number)
                    {
                        t_bot++;
						min_bot = i_bot;
                    }
                    else if(i_bot == random_number)
                    {
                        printf("Gagné !\nTrouvé en %d essais\nL'IA l'a fait en %d...\n",t,t_bot);
                	    exit(0);
					}	
				}
            }
		}
	}
}
