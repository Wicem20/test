#include <stdio.h>
int main()
{
int i, n1, n2, S, som ;
som = 0 ;
i=0 ;

do
{
printf ("donnez un entier n1 ") ;
scanf ("%d", &n1) ;
printf ("donnez un entier n2 ") ;
scanf ("%d", &n2) ;
S = n1+n2 ;
som += S ;
i+=1 ;
}while(i<4) ;
printf ("Somme : %d\n", som) ;
}