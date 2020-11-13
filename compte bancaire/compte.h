#ifndef COMPTE_H
#define COMPTE_H
#include "compte.h"
#include <iostream>
using namespace std; 

class compte

{
    private:
        float solde;
        string Rib;

    public:
        compte(float solde,string Rib);
        float GetRib();
        void GetSolde(int montant);
        void AjouteCompte(float solde);
        void AjouterMontant();
        void RetierMontant();
        void Virement();
        void SetSolde(float);

};


#endif