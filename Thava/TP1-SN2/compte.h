#ifndef COMPTE_H
#define COMPTE_H
#include <string>
using namespace std;
class Compte
{
private:
    float Solde ;
    string Rib ;
    int NbClients;
public:
    Compte(float Solde , string Rib ,int NbClients);
    Compte();
    float getSolde();
    void getNbClients();
    void setSolde(int montant);
    void setNbClients(int nb);
    void ajouterUnCompte(float Solde , int NbClients);
    string getRib();
    void retirerUnMontant();
    void deposerUnMontant();
    void faireUnVirement(Compte *x , Compte *y );
    void commanderUnChequier();
    void getLogs();
    void setSolde(float x);
    



};


#endif // !COMPTE_H