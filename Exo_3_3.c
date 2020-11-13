#include <stdio.h>
#include <string.h>
main()
{
  float taux_h1, taux_h2, impot,medical;
  float S_brut1, S_brut2, S_net1, S_net2;
  float Heures1, Heures2;
  taux_h1= 8.43;
  taux_h1= 5.67;
  impot= 0.2;
  //printf("%f",impot);
  medical = 0.02;
  printf("Entrer le nombre d'heures pour la personne 1 :");
  scanf ("%f", &Heures1);
  printf("Entrer le nombre d'heures pour la personne 2 :");
  scanf ("%f", &Heures2);
  S_brut1 =  taux_h1*Heures1;
  S_brut2 =  taux_h2*Heures2;
  S_net1 = S_brut1-((S_brut1*impot)-(S_brut1*medical));
  S_net2 = S_brut2-((S_brut2*impot)-(S_brut2*medical));
  printf("\n-------Lap personne 1------------");
  printf("\nLe salaire brut est %f : ",S_brut1);
  printf("\nLe salaire net est %f : ",S_net1);
  printf("\n-------Lap personne 2------------");
  printf("\nLe salaire brut est %f : ",S_brut2);
  printf("\nLe salaire net est %f : ",S_net2);
  
 }
