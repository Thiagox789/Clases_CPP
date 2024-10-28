#include <iostream>
using namespace std;

//Escribir un programa que cuente la cantidad de dígitos
// en un número entero (ayúdate usando un contador).

int main()
{
    int num;
    num=0;
    int contador;
    contador=0;

    cout << "Ingresa un numero: ";
    cin >> num;

    if(num==0)
    {
        contador=1;
    }
    else
    {
        while (num>0)
        {
            num/=10;
            contador++;
        }
    }
    cout << "La cantidad de digitos es: " << contador << endl;
    return 0;
}