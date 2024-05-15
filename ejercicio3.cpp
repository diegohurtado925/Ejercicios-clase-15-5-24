#include <iostream>
using namespace std;
int main ()
{
    float a;

    cout << "CLASIFICADOR DE ANGULOS" << endl << endl;

    cout << "Ingrese el valor de su angulo: ";
    cin  >> a;

    if ( a < 90)
    {
        cout << "Su angulo es agudo" << endl;
    }

    else if ( 90 < a)
    {
        cout << "Su angulo es obtuso" << endl;
    }

    else 
    {
        cout << "Su angulo es recto" << endl;
    }
return 0;
}