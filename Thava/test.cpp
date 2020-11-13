#include <iostream>
using namespace std ;
class matrice ; // compilation déclaration de vect
// *********** La classe vect ******
class vect
{
double v[3] ; // vecteur à 3 composantes
public :
vect (double v1=0, double v2=0, double v3=0) // constructeur
{ v[0] = v1 ; v[1]=v2 ; v[2]=v3 ;
}
friend vect prod (matrice, vect) ; // prod = fonction amie indépendante
void affiche ()
{ int i ;
for (i=0 ; i<3 ; i++) cout << v[i] << " " ;
cout << "\n" ;
}} ;

// *********** La classe matrice ************
class matrice
{
double mat[3] [3] ; // matrice 3 X 3
public :
matrice (double t[3][3]) // constructeur, à partir d’un tableau 3 x 3
{ int i ; int j ;
for (i=0 ; i<3 ; i++)
for (j=0 ; j<3 ; j++)
mat[i] [j] = t[i] [j] ;
}
friend vect prod (matrice, vect) ; // prod = fonction amie indépendante
} ;
// ********** La fonction prod *************
vect prod (matrice m, vect x)
{ int i, j ;
double som ;
vect  res ; // pour le résultat du produit
for (i=0 ; i<3 ; i++)
{ for (j=0, som=0 ; j<3 ; j++)
som += m.mat[i] [j] * x.v[j] ;
res.v[i] = som ;
}
return res ;
} 
// ********** Programme de test *********
int main()
{ vect w (1,2,3) ;
vect  res ;
double tb [3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 } ;
matrice a = tb ;
res = prod(a, w) ;
res.affiche () ;
return 0;
} 
