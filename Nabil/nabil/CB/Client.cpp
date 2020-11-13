#include <iostream>
#include <string.h>
#include "Client.h"

using namespace std;

Client::Client (string Nom, string Prenom, int numCin, int numTel)
{
            this->Nom = Nom;
            this->Prenom = Prenom;
            this->numCin = numCin;
            this->numTel = numTel;
}


void Client::afficher()
{
    cout << "/*----- Bonjour ------*/" << endl;
    cout << "/*----- Nom : " <<Nom<< endl;
    cout << "/*----- Prénom : " <<Prenom<< endl;

}

void Client::afficheCompte()
{
    cout << "/*----- Bonjour ------*/" << endl;
    cout << "/*----- Nom : " <<Nom<< endl;
    cout << "/*----- Prénom : " <<Prenom<< endl;

}
