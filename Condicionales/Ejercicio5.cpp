#include <iostream>
using namespace std;

//Escribir un programa que pida 3 números y 
//los muestre en pantalla de menor a mayor.

int main()
{
    float numero1, numero2, numero3;
    cout << "Ingresa el numero 1: ";
    cin >> numero1;
    cout << "Ingresa el numero 2: ";
    cin >> numero2;
    cout << "Ingresa el numero 3: ";
    cin >> numero3;
    // Comparar los números y mostrarlos en orden
    if (numero1 <= numero2 && numero1 <= numero3) {
        cout << numero1 << " ";
        if (numero2 <= numero3) {
            cout << numero2 << " " << numero3;
        } else {
            cout << numero3 << " " << numero2;
        }
    } else if (numero2 <= numero1 && numero2 <= numero3) {
        cout << numero2 << " ";
        if (numero1 <= numero3) {
            cout << numero1 << " " << numero3;
        } else {
            cout << numero3 << " " << numero1;
        }
    } else {
        cout << numero3 << " ";
        if (numero1 <= numero2) {
            cout << numero1 << " " << numero2;
        } else {
            cout << numero2 << " " << numero1;
        }
    }

    cout << endl; 
    return 0;
}