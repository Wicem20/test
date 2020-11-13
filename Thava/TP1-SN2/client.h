#ifndef CLIENT_H
#define CLIENT_H
#include "compte.h"
#include <string>
#include "mysql_connection.h"
#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>

class Client
{
private:
    string Nom;
    string Prenom;
    int Cin;
    int NumTel;
    float Solde;
    Compte compte;
    
public:
    Client();
    ~Client();
    void getNom();
    void getPrenom();
    Client(string Nom , string Prenom , int Cin , int NumTel , Compte *compte);
    void ajouterUnClient(string Nom , string Prenom , int Cin , int NumTel );
    void modiferUnClient(string Nom , string Prenom , int Cin , int NumTel  );
    void getCompteinfo();
    void saveToBdd();
};  
#endif // !CLIENT_H