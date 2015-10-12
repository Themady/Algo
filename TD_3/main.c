#include "header.h"

int main()
{
	int tab[100]= {0}, i = 0, a = 0, b = 0, test_error = 0;
	printf("Entrer deux nombre entier a et b : \na : ");
	scanf_s("%d", &a);
	printf("b : ");
	scanf_s("%d", &b);
	premiers(a, b, tab, 100,&test_error);//Appel la fonction
	printf("Le(s) nombre(s) premier(s) entre %d et %d sont :\n", a, b);
	while (i < 99 && tab[i] != 0)//Parcour et affiche les valeurs du tableau
	{
		printf("%d \n", tab[i]);
		i++;
	}
	if (test_error == 1)
	{
		printf("\nIl y a plus de 100 nombres premiers entre %d et %d \ntous n'ont donc pas pu etre affiches!\n", a, b);
	}
	system("pause");
	return 0;
}
