//Pour tester une solution mettre les deux autres entre /* *
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int nombre = 0;
printf("Entrez un nombre : \n");
scanf_s("%d", &nombre);
/*
//Solution While
while (nombre >= 0)
{
	printf("%d\n", nombre);
	nombre--;
}
//Solution boucle Do While
do
{
	printf("%d\n", nombre);
	nombre--;
} while (nombre >= 0);
*/
//Solution boucle For
for (nombre >= 0; nombre--;)
{
	printf("%d \n", nombre);
}
system("pause");
return 0;
}
