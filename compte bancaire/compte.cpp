#include <iostream>
#include <string>
#include "compte.h"
using namespace std; 

Compte::Compte(){

}
Compte::Compte(float Solde, string Rib){
    this->Solde = Solde;
    this->Rib = Rib;

}

void Compte::retirerMontant(Compte *x, Compte *y){

    float montant;
cout << "Entrez le montant a retirer"<< endl;
cin >> montant;
    float montantx = x->getSolde() - montant;
    x->Solde = tempx;
    x->setSolde(tempx);
    float montanty  = y->getSolde() + montant;
    y->setSolde(tempy);
    
    cout << "Retrait effectuée" << endl;
}


