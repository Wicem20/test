#include "employeedevente.h"

Employeedevente::Employeedevente(string nom , string prenom , string date , float NdeHeure, float caffaire) : cAffaire(caffaire)  , Employee( nom ,  prenom ,  date , calculSalaire() , nDeHeure) 
{
    this->Salaire = Employee::caculSalaire() + cAffaire*0.2+400;
}

Employeedevente::~Employeedevente()
{
}
void Employeedevente::affiche(){
    Employee::affiche();
    cout <<"Chiffre d'affaire = " <<cAffaire << endl;
    cout << "Salaire = " << Salaire << endl;
    
}
float Employeedevente::calculSalaire(){
    
    return Employee::caculSalaire() + cAffaire*0.2+400;
}