#include <stdio.h>

int mouvement(void)
{
	char action;
	int ligne, colonne, i, j, plateau[10][10];
	ligne = 0;
	colonne = 0;
	//tant que le tableau n'est pas opérationnel
	i = 0;
	j = 0;
	for(i=0; i<=9; i++)
		{
		for(j=0; j<=9; i++)
			{
				plateau[i][j] = 0;
			}			
		}
	
	// choix de la case où se trouve le pion à faire agir
	printf("Quel pion voulez-vous jouer ? \n Choisir la ligne");
	scanf("%d", &ligne);
	printf("Choisir la colonne");
	scanf("%d", &colonne);
	//Vérification qu'il y a un pion dans la case choisie
	if (plateau[ligne][colonne] == 0)
		{
			printf("Erreur ! Il n'y a pas de piont dans cette case");
		}
	//Vérification de l'appartenance du pion au jour actif
	// Pas encore effectué
	
	//Choix de l'action à effectuer
	printf("Quelle action voulez-vous effectuer ? (S = Sauter ou D = Déplacer");
	scanf("%c", &action);
	if (action == 'S')
		{
			printf("Pas encore opérationnel"); /* Sauter(ligne, colonne);*/
		}
	else if (action == 'D')
			{
				printf("En cours de production"); // faire le déplacement
			}
		else
			{
				printf("Erreur ! Il faut saisir S ou D");
			}
	getchar();
	return 0;
}
