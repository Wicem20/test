#include <iostream>
#include <string>
#include "compte.h"
using namespace std;            

Compte::Compte(){
    
}
Compte::Compte(float Solde , string Rib ,int NbClients){
    this->Solde = Solde;
    this->Rib = Rib;
    this->NbClients = NbClients; 
}
void Compte::setSolde(float x){
    this->Solde = x;
}
float Compte::getSolde(){
    return this->Solde;
}
string Compte::getRib(){
    return this->Rib;
}
void Compte::faireUnVirement(Compte *x , Compte *y ){
    float montant;
    cout << "Entrez le montant a verser"<< endl;
    cin >> montant;
    float tempx = x->getSolde() - montant;
    x->Solde = tempx;
    x->setSolde(tempx);
    float tempy  = y->getSolde() + montant;
    y->setSolde(tempy);
    
    cout << "Virement effectue" << endl;

}