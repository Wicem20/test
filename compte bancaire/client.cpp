
#define CLIENT_H
#include CLIENT_H
#include <iostream>
using namespace std; 

 Client::Client(string Nom , string Prenom , int numCin , int NumTel , Compte *compte){

    this->Nom = Nom;
    this->Prenom = Prenom;
    this->numCin = numCin;
    this->NumTel = NumTel;
    this->compte = compte;

}





