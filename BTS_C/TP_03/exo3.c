#include <stdio.h>
int main()
{

//scanf ("%d", &firstnum); 

int day,nurn1, nurn2,count;
printf("Entrez la valeur de day,nurn1, nurn2,count:");
 scanf("%d %d %d %d", & day,&nurn1,&nurn2,&count);
 printf("Le nombre entier que vous avez entré est %d %d %d %d\n",day,nurn1, nurn2,count);
 
float grade, firstnurn,secnurn ;
printf("Entrez la valeur de grade, firstnurn,secnurn :"); 
scanf("%f %f %f ",&grade,&firstnurn, &secnurn);
printf("Le nombre entier  que vous avez entré est %f %f %f\n", grade, firstnurn,secnurn );

char fir_char, ch1;
printf("Entrez la valeur de fir_char, ch1 :"); 
scanf("%c %c ",&fir_char, &ch1);
printf("Le nombre entier  que vous avez entré est %c %c\n" ,fir_char, ch1);


return 0;

 }
