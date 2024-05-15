#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    float a, b, c, d, raiz;

    cout << "Ingrese el valor de a: ";
    cin >> a;

    cout << "Ingrese el valor de b: ";
    cin >> b;

    cout << "Ingrese el valor de c: ";
    cin >> c;

    d = (b*b)- (4*c*a);
    raiz = sqrt((b*b)- (4*c*a));
    
    if ( a == 0 )
    {
        cout << "No es valido ";
    }

    else if ( b == 0 )
    {
        cout << "No es valido ";
    }

    else if (d<1)
    {
        cout << "La solucion no se encuentra dentro de los reales" << endl;
    }
    else 
    {
        cout << "La primera raiz es: " << (-b + raiz)/(2*a) << endl;
        cout << "La segunda raiz es: " << (-b - raiz)/(2*a) << endl;
    }
return 0;
}