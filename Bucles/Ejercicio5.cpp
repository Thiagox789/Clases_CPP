#include <iostream>
using namespace std;

// Escribir un programa que pida al usuario números y calcular su promedio
// hasta que se ingrese un número negativo usando un bucle do-while.

int main()
{
    float numero, suma; 
    int contador;
    contador = 0;
    suma = 0;

    do 
    {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero >= 0) {
            suma += numero;
            contador++;
        }
    } 
    while (numero >= 0);

    if (contador > 0) {
        float promedio = suma / contador;
        cout << "El promedio de los numeros es: " << promedio << endl;
    } else {
        cout << "No se ingresaron numeros válidos." << endl;
    }

    return 0;
}
