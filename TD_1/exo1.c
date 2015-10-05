#include "header.h"

void exo1()
{
	int a = 12, b = 32;
	float c = 32.54;

	printf(" Valeur de a : %d\n", a);
	printf(" Valeurs initiales : a = %d, b = %d, c = %.3f\n", a, b, c);
	printf("Saisir une valeur entiere :\n");
	scanf_s("%d", &a);
	printf("Saisir une valeur entiere et une valeur reelle :\n");
	scanf_s("%d %f", &b, &c);
	printf("Après modification : a = %d, b = %d et c = %.3f\n", a, b, c);
}