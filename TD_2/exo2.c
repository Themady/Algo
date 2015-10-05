
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int tab[3];
	int i = 0, a = 0;

	printf("Entrez trois nombres entiers \n");
	for (i = 0; i < 3; i++)
	{
		a = i + 1;
		printf("Saisir l'element n°%d \n", a);
		scanf_s("%d", &tab[i]);
	}
	printf("Vous avez entre les elements suivants :  ");
	for (i = 0; i < 3; i++)
	{
		
		printf("%d\t", tab[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
