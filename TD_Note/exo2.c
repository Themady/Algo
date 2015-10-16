#include "header.h"

void note()
{
	int nbr_note = 0, note_tmp=0, maxi = NULL,mini = 100, moyenne = 0, somme = 0;

	printf("Entrer le nobre de notes :\n");
	scanf_s("%d", &nbr_note);
	for (int i = 0; i < nbr_note; i++)
	{
		printf("Entrer une note entre 0 et 20 : \n");
		scanf_s("%d", &note_tmp);
		if(note_tmp > maxi)
		{
			maxi = note_tmp;
		}
		else if(note_tmp < mini)
		{
			mini = note_tmp;
		}
		somme = somme + note_tmp;
		moyenne = somme / nbr_note;
	}
	printf("Note max : %d, note mini : %d, note moyenne : %d\n", maxi, mini, moyenne);
}