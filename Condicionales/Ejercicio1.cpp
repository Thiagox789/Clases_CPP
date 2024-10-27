#include <iostream>
using namespace std;
//Escribir un programa que pregunte al usuario su edad y muestre por 
//pantalla si es mayor de edad o no.

int main()
{
    int edad;
    cout<<"Ingrese su edad por favor:";
    cin>>edad;
    if (edad>=18)
    {
        cout<<"Usted es mayor de edad"<<endl;
    }
    else
    {
        cout<<"Usted es menor de edad"<<endl;
    }

    return 0;
}