#include <iostream>
#include <iomanip>
using namespace std;
class Point
{
private: // accessible par personne même pas PointCouleur
double x;
double y;
protected: // accessible par personne sauf PointCouleur
string nom;
public: // accessible par tout le monde
Point(double x=0.0, double y=0.0, string nom="");
// Accesseurs
double getX() const;
void setX(double x);
double getY() const;
void setY(double y);
string getNom() const;
void setNom(string nom);
// Service(s)
void afficher() const;
};
Point::Point(double x, double y, string nom) : x(x), y(y), nom(nom)
{
}
double Point::getX() const
{
return x;
}
void Point::setX(double x)
{
this->x = x;
}
double Point::getY() const
{
return y;
}
void Point::setY(double y)
{
this->y = y;
}
string Point::getNom() const
{
return nom;
}
void Point::setNom(string nom)
{
this->nom = nom;
}
void Point::afficher() const
{
cout << "<" << nom << ":" << x << "," << y << ">";
}
class PointCouleur : public Point
{
private: // accessible par personne même pas Point
unsigned int couleur;
public: // accessible par tout le monde
PointCouleur(double x=0.0, double y=0.0, string nom="", unsigned int couleur=0);
// Accesseur(s)
unsigned int getCouleur() const;
void setCouleur(unsigned int couleur);
// Service(s)
void afficher() ; // redéfinition par surcharge
// Tests des accès aux membres hérités
void modifierX(double x);
void modifierY(double y);
void modifierNom(string nom);
};
// Appeler en premier le contructeur de la classe mère (ici Point)
PointCouleur::PointCouleur(double x, double y, string nom, unsigned int couleur) : Point(x,
y, nom), couleur(couleur)
{
}
unsigned int PointCouleur::getCouleur() const
{
return couleur;
}
void PointCouleur::setCouleur(unsigned int couleur)
{
this->couleur = couleur;
}
void PointCouleur::afficher() const
{
Point::afficher(); // appel de la méthode afficher de la classe mère Point
cout << " [#" << std::hex << std::uppercase << couleur << "]"; // ajoute l’affichage de
}

void PointCouleur::modifierX(double x)
{
//this->x = x; // erreur: ’double Point::x’ is private
}
void PointCouleur::modifierY(double y)
{
//this->y = y; // erreur: ’double Point::y’ is private
}
void PointCouleur::modifierNom(string nom)
{
this->nom = nom; // accessible par héritage car nom est protected
}
int main()
{
Point p1; // ou Point p1(0,0,"");
//p1.x = 1; // erreur: ’double Point::x’ is private
//p1.nom = "A"; // erreur: ’std::string Point::nom’ is protected
p1.afficher(); // produit : <:0,0>
Point p2(2, 2, "P2");
p2.afficher(); // produit : <P2:2,2>
PointCouleur p3(2.5, 5.5, "P3", 0xFFFFFFFF);
p3.afficher(); // produit : <P3:2.5,5.5> [#FFFFFFFF]
// Tests :
p3.setX(1.2); // accessible par héritage : PointCouleur est un Point
p3.setY(3.5); // idem
p3.afficher(); // produit : <P3:1.2,3.5> [#FFFFFFFF]
p3.modifierX(0.); // voir la méthode
p3.modifierY(0.); // idem
p3.modifierNom("O"); // idem
p3.afficher(); // produit : <O:1.2,3.5> [#FFFFFFFF]
return 0;
}