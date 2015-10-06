#include <stdio.h>
#include <stdlib.h>

void main()
{
	int nombre, i = 0, nb_multi = 2, table = 0;
	float div = 1;
	printf("Entrez un nombre entier : \n");
	scanf_s("%d", &nombre);
	while (div != 0)
	{
		div = nombre % nb_multi;
		if (div != 0)
			nb_multi++;
	}
	while (table <= nombre)
	{
		printf("%d * %d = %d\n", i, nb_multi, table);
		table = table + nb_multi;
		i++;
	}
	system("pause");
	return 0;
}