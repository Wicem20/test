#include <iostream>
#include <string>
using namespace std;


int main()
    { 
    int menu;
    
    while (1)
    {
        cout<<endl<<" ----------------------- MENU -----------------------"<<endl<<endl;
        cout<<"1. Déposer"<<endl;
        cout<<"2. Créditer"<<endl;
        cout<<"3. Retirer"<<endl;
        cout<<"4. Consulter un RIB"<<endl;
        cout<<"5. Virement"<<endl;
        cout<<"6. Commander un chéquier"<<endl;
        cout<<"7. Plus d'information"<<endl;
        cout<<"0. Quitter"<<endl;
        cout<<"Choix : ";
        cin>>menu;
        cout<<endl;
 
        switch(menu)
        {
            case 0 : break;
 
            case 1 : /*Deposer()*/ cout<<"déposer"<<endl;
            break;
 
            case 2 : /*Crediter()*/ cout<<"créditer"<<endl;
            break;
 
            case 3 : /*Retirer()*/ cout<<"Retirer"<<endl;
            break;
 
            case 4 : /*RIB()*/ cout<<"RIB"<<endl;
            break;
 
            case 5 : /*Virement()*/ cout<<"Virement"<<endl;
            break;
 
            case 6 : /*Chequier()*/ cout<<"Chéquier"<<endl;
            break;
 
            case 7 : /*Information()*/ cout<<"Information"<<endl;
            break;
 
        }
 
    }
    }