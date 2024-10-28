#include <iostream>
using namespace std;

// Escribir un programa que muestre un menú donde las opciones 
// sean “Equilátero”, “Isósceles” y “Escaleno”, pida una opción y 
// calcule el perímetro del triángulo seleccionado.

int main() {
    int opcion;
    float L1, L2, L3;

    cout << "---- Bienvenido a la calculadora de perimetros de triangulos ----" << endl;
    cout << "Seleccione el tipo de triangulo:" << endl;
    cout << " -1- Equilatero" << endl;
    cout << " -2- Isosceles" << endl;
    cout << " -3- Escaleno" << endl;
    cout << " -4- Salir" << endl;
    cout << "Ingrese su opcion (1, 2, 3 o 4): ";
    cin >> opcion;
    switch (opcion) 
    {
        case 1: 
            cout << "Ingrese la longitud de uno de los lados (L): ";
            cin >> L1;
            cout << "El perimetro del triangulo equilatero es: " << L1 * 3 << endl;
            break;
        case 2: 
            cout << "Ingrese la longitud de la base (L1): ";
            cin >> L1;
            cout << "Ingrese la longitud de los lados iguales (L2): ";
            cin >> L2;
            cout << "El perimetro del triangulo isosceles es: " << L1 + (L2 * 2) << endl;
            break;
        case 3: 
            cout << "Ingrese la longitud del lado 1 (L1): ";
            cin >> L1;
            cout << "Ingrese la longitud del lado 2 (L2): ";
            cin >> L2;
            cout << "Ingrese la longitud del lado 3 (L3): ";
            cin >> L3;
            cout << "El perimetro del triangulo escaleno es: " << L1 + L2 + L3 << endl;
            break;
        case 4:
            cout << "Saliendo :( ";
            return 0;
        default:
            cout << "Opcion no valida. Por favor, seleccione una opcion del 1 al 3." << endl;
            break;
    }

    return 0; // Fin del programa
}
