#include <iostream>
using namespace std;
int main ()
{
    string nombre;

    float a, b, c, d, e, f, promedio=0;
    

    cout << "PROMEDIO FINAL" << endl << endl;

    cout << "Ingrese su primer nombre: ";
    cin >> nombre;

    cout << "Ingrese la nota del Corto 1: ";
    cin >> a;

    cout << "Ingrese la nota del Corto 2: ";
    cin >> b;

    cout << "Ingrese la nota  del Primer parcial: ";
    cin >> c;

    cout << "Ingrese la nota del Segundo parial: ";
    cin >> d;

    cout << "Ingrese la nota del Laboratorio: ";
    cin >> e;

    cout << "Ingrese la nota del Proyecto: ";
    cin >> f;

    promedio = ((a*0.1)+(b*0.1)+(c*0.15)+(d*0.20)+(e*0.20)+(f*0.25));

    if (promedio >= 6)
    {
        cout <<  endl << endl << nombre << " tiene una nota final de: " << promedio << endl;
    }

    else 
    {
        cout << endl << endl << nombre << " tiene una nota final de: " << promedio << " Pero su promedio es menor a 6, por lo tanto ha reprobado la materia " << endl;
    }

















return 0; 
}