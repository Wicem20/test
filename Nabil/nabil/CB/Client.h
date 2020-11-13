#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string.h>

using namespace std;


class Client
{

private:

    string Nom;
    string Prenom;
    int numCin;
    int numTel;
    

public:

    Client (string Nom, string Prenom, int numCin, int numTel);
    void afficher();
    void afficheCompte();
    //void ajouterClient();
    //void modificationClient();

};

#endif