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
