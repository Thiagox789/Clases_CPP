#include <iostream>
using namespace std;

//Escribe un programa que pase de Kg a otra unidad de medida de 
//masa, mostrar en pantalla un menú con las opciones posibles.

int main()
{
    float kg;
    int opcion;
    cout << "Ingrese la cantidad en kg: ";
    cin>>kg;
    cout << "----Bienvenido a la calculadora de medidas de masa----" <<endl;
    cout << " -1- Gramos (g)" << endl;
    cout << " -2- Miligramos (mg)" << endl;
    cout << " -3- Salir " << endl;
    cout << "Elije la opcion (1,2): ";
    cin>>opcion;
    switch(opcion){
        case 1:
            cout << kg << " Kg son " << kg * 1000 << " g." << endl;
            break;
        case 2:
            cout << kg << " Kg son " << kg * 1000000 << " mg." << endl;  // Conversión a mg
            break;
        case 3:
            cout << "Saliendo" << endl;
            return 0;
        default:
            cout << "Opcion no valida :( ";
            break;

    }

}