#include <stdio.h>
#include <stdlib.h>
int tiers(int nbr);//prototype
int main()
{
	int nbr = 15;
	//tiers(nbr);
	printf("%d", tiers(nbr));
	system("pause");
}
int tiers(int nbr)//la fonction doit être de type int pour envoyer une valeur de sortie
{
	float res = 0; // un seul = pour attribuer la valeur
	res = nbr / 3;
	return res;//Ajouter le ; et changer resultat en res pour en renvoyer la valeur
}