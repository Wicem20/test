#include <iostream>
#include <iomanip>
using namespace std ;
class point
{ 
float x, y ;
public :
point (float abs=0.0, float ord=0.0): x(abs) , y(ord):!&²   a
{ x = abs ; y = ord ;
}
void affiche ()
{ cout << "Coordonnées : " << x << " " << y << "\n" ;
}
void deplace (float dx, float dy)
{ x = x + dx ; y = y + dy ;
}
} ;

class pointcol : public point {
    int col;
    public : 
    pointcol (float abs, float ord, int col) : point (abs,ord) , col(col)
    {

    }
    void affiche (){
        point::affiche();
        cout <<  "couleur = " << col << endl;
    }
    
};
int main (){ 
    
    pointcol x(2.5 , 3.2 , 5);
    x.affiche();
}