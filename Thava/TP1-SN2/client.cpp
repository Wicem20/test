#include "client.h"
#include "compte.h"
#include <iostream>
using namespace std;
 Client::Client(string Nom , string Prenom , int Cin , int NumTel , Compte *compte){
this->Nom = Nom;
this->Prenom = Prenom;
this->Cin = Cin;
this->NumTel = NumTel;
this->compte = *compte;
this->saveToBdd();
 }
 Client::~Client(){}

void Client::getNom(){
     cout << this->Nom << endl;
 }
void Client::saveToBdd(){
    try {
  sql::Driver *driver;
  sql::Connection *con;
  sql::Statement *stmt;
  sql::ResultSet *res;

  /* Create a connection */
  driver = get_driver_instance();
  con = driver->connect("tcp://196.168.0.130", "thava", "mdp");
  /* Connect to the MySQL test database */
  con->setSchema("LCL");

  stmt = con->createStatement();
  //res = stmt->executeQuery("SELECT 'Hello World!' AS _message");
  string attribution = "insert into CompteBancaire(CIN , Prenom , Solde , numTel , Rib) values('"+ to_string(this->Cin) +"' ,'" + this->Prenom + "','" + to_string(this->Solde) + "','" + to_string(this->NumTel) + "','" + this->compte.getRib();"')" ;
  res = stmt->executeQuery(attribution);
  delete res;
  delete stmt;
  delete con;

} catch (sql::SQLException &e) {
  cout << "# ERR: SQLException in " << __FILE__;
  cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
  cout << "# ERR: " << e.what();
  cout << " (MySQL error code: " << e.getErrorCode();
  cout << ", SQLState: " << e.getSQLState() << " )" << endl;
}

}
