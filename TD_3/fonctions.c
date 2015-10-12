#include "header.h"

void premiers(int a, int b, int *tab, int taille_tab, int *overflow)
{
	int i = 0, nb_test = a, ct = 0, flag = 0;
	float temp = 0;
	while (nb_test <= b && *overflow == 0)//Parcour tous les nombres entre "a" et "b" compris
	{
		ct = nb_test;
		compteur();
		while (ct > 2 || flag == 0)//Boucle de test de la primalitée
		{
			ct--;
			temp = nb_test % ct;//Test si "ct" est un diviseur de "nb_test"
			if (temp == 0)//"nb_test" n'est pas premier -> sortie de bloucle
			{
				flag = 1;
			}	
			else if (ct == 2 && temp != 0)//Ajoute "nb_test" au tableau car il n'est divisible que par lui même et 1
			{
				tab[i] = nb_test;
				i++;
				if (i >= taille_tab)//Test si l'on dépasse la taille max du tableau
				{
					flag = 1;
					*overflow = 1;
				}		
			}
		}
		nb_test++;
	}
}

void compteur()
{
	static int i = 0;//Variable locale qui est conservée après l'execution de la fonction
	i++;
	printf("Appel numero %d\n", i);
}