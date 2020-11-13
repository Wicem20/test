#include <iostream>
#include "client.h"
#include "compte.h"
using namespace std;


int main()
{
    Compte *compteM = new Compte(500,  "dfkhgkdfhgk" , 1);
    Client  testa("test", "test2", 56654545 , 454567413 , compteM);
    Compte *compteN = new Compte(600 ,  "dfkhgkdfhgk" , 1);
    Client  testb("test", "test2", 56654545 , 454567413 , compteN);
    //test.getNom();
    compteM->faireUnVirement(compteM , compteN);
    float x = compteM->getSolde();
    float y = compteN->getSolde();
    cout << x << "\t " << y << endl;
    return 0;
}
