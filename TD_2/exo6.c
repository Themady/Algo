#include <stdio.h>
#include <stdlib.h>

void main()
{
	
	char tab[3], verif;
	int a, test,i;
	for (i = 0; i < 3; i++)
	{
		a = i + 1;
		printf("Saisir la lettre n°%d \n", a);
		scanf_s(" %c", &tab[i], 1);
	}

	if (tab[0] < tab[1] && tab[1] < tab[2])
	{
		test = 1;
		printf("les lettres sont en ordre alpha\n");
	}
	else
	{
		test = 0;
		printf("les lettres ne sont pas en ordre alpha\n");
	}

		
	system("pause");

}
