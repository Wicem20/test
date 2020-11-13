#include <string>
#include <iostream>
#include "employee.h"

class Employeerepresentateur : public Employee
{
private:
    float cAffaire;
    float nDeHeur;
    float Salaire ;
public:
    Employeerepresentateur(string nom , string prenom , string date ,float NDeHeure  ,float caffaire);
    ~Employeerepresentateur();
    float calculSalaire();
};
