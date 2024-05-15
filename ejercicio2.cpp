#include <iostream>
using namespace std;
int main ()
{
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >17)
    {
        cout << endl << "Eres mayor de edad";
    }

    else 
    {
        cout << endl << "Eres menor de edad";
    }    
return 0;
}