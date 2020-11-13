#include "employee.h"
#include <string>
class Employeedevente : public Employee
{
private:
    float cAffaire;
    float nDeHeure;
    float Salaire;
public:
    Employeedevente(string nom , string prenom , string date ,float NDeHeure  ,float caffaire);
    ~Employeedevente();
    void affiche();
    double* calculSalaire();
};

