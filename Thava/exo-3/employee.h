#include <string>
#include <iostream>
using namespace std;
class Employee
{
private:
    
    string Nom ; 
    string Prenom;
    string Date;
    float  Salaire;
    float nDeHeure;
public:
    Employee(string nom , string prenom , string date , float salaire , float Nheure);
    ~Employee();
    float getSalaire() const;
    void affiche();
    float caculSalaire();
};

