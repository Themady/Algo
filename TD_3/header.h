//Consigne
/*
1 -ecrire une fonction qui reçoit deux nombre a et b en argument, puis affiche tous le nombre premiers entre a et b.
Appeler cette fonction à partire du programme principal.
2 -Ecrire une fonction san argument ni valeur de retour qui se contente d'afficher à chaque appel le nombre dee fois où elle à
été appelé sous la forme : "Appel numero 5"
3 - Organiser votre programme de telle sort que vos fonctions soient déclarée dans un fichier ".h"
*/

#include <stdio.h>
#include <stdlib.h>

//Prototypes
void premiers(int a, int b, int *tab, int taille_tab, int *overflow);
void compteur();