#ifndef CLIENT_H
#define CLIENT_H
#include "compte.h"
#include <string>
using namespace std; 

class Client
{

private:

    int numCin;
    string Nom;
    string Prenom;
    int numTel;
    float solde;
    

public:

    void getNom();
    void getPrenom();
    void afficheCompte(string nom, string prenom, int numCin, float solde);
    void ajouterClient(string nom, string prenom, int numCin, int numTel);
    void modificationClient(string nom, string prenom, int numCin, int numTel);

};

#endif