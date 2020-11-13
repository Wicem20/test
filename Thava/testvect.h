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