#include <iostream>
using namespace std;
int main ()
{
    float a, b;

    cout << "Angulos" << endl << endl;

    cout << "Ingrese el valor del primer angulo: ";
    cin >> a;

    cout << "Ingrese el valor del segundo angulo: ";
    cin >> b;

    if ((a+b)<180)
    {
        cout << "El valor del tercer angulo es: " << (180-(a+b)) << "°" << endl;
    }

    else 
    {
        cout << "Los angulos no son validos";
    }
    

return 0;
}