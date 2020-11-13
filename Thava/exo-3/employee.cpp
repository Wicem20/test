#include "employee.h"
Employee::Employee(string nom , string prenom , string date , float salaire , float Nheure) : Nom(nom) , Prenom(prenom) , Date(date) , Salaire(caculSalaire()) , nDeHeure(Nheure)
{
}

Employee::~Employee()
{
}
float Employee::getSalaire() const{
    return Salaire;
    }
float Employee::caculSalaire(){
    return nDeHeure*8;
}
void Employee::affiche(){
    cout <<"Nom = " << Nom << endl;
    cout <<"Prenom = "<< Prenom << endl;
    cout <<"Date = " <<Date << endl;
    
}
