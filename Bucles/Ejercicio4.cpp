#include <iostream>
using namespace std;

//Crear un programa que pida un número por pantalla y luego 
//muestre su tabla de multiplicar (del 1 a 10) por pantalla.

int main()
{
    float num;
    float op;
    cout << "Ingrese un numero: ";
    cin >> num;
    cout << endl;
    for(int i = 1; i<=10 ; i++)
    {
        op = num * i;
        cout << num <<" * " << i << " es: " << op << endl;
    }
    return 0;
}