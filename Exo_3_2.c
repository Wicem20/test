#include <stdio.h>
#include <string.h>
int main()
{
char genre [4], nom [5], prenom [20];
printf("Entrez le genre :");
scanf ("%s", genre);
printf("Entrez le nom :");
scanf ("%s", nom);
printf("Entrez le prenom :");
scanf ("%s", prenom);


int numero ;
char nomderue [50]
printf ("Entrez le numero de la rue:");
scanf ("%d", &numero);
printf ("Entrez nom de la rue:");
scanf ("%s", nomderue);


int numero2 ;
char ville[15];

printf ("Entrez le code postale:");
scanf ("%d", &numero2);
printf ("Entrez la ville:");
scanf ("%s", ville);

printf ("%s %s %s \n",genre, nom, prenom);
printf ("%d %s \n",numero, nomderue);
printf ("%d %s \n",numero2, ville);


return 0;
}
