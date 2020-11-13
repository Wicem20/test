#include "employeerepresentateur.h"

Employeerepresentateur::Employeerepresentateur(string nom , string prenom , string date ,float NDeHeure  ,float caffaire) : Employee (nom , prenom , date , NDeHeure , caffaire )
{
}

Employeerepresentateur::~Employeerepresentateur()
{
}
float Employeerepresentateur::calculSalaire(){
    this->Salaire = Employee::caculSalaire() + cAffaire * 0.2 + 800;
    return Employee::caculSalaire() + cAffaire * 0.2 + 800;
}