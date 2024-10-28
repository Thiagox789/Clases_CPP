#include <iostream>
using namespace std;
//Escribir un programa  que pida un número 
//del 1 al 5 y diga si es primo o no.

int main()
{
    int numero;
    cout << "Ingresa un numero entre 1 y 5: ";
    cin >> numero;

    if (numero < 1 || numero > 5) {
        cout << "El numero ingresado no esta en el rango" << endl;
    }
    else if (numero == 2 || numero == 3 || numero == 5) {
        cout << "El numero es primo." << endl;
    }
    else {
        cout << "El numero no es primo." << endl;
    }

    return 0;
}