#include "header.h"

void exo2()
{
	int i = 0, cmp = 0, n = 20, m = 50;

	if(n%2 == 0);
		n++;
	for (i = n; i <= m;i += 2)
	{
		cmp++;
		printf("Nombre entier impair numero %d: %d \n", cmp, i);
	}
}