#include <iostream>
using namespace std;

//Escribir un programa que realice la suma de los 100 primeros números naturales.

int main()
{
    int suma;
    suma=0;
    for( int i=0; i<=100 ; i++ )
    {
        suma += i;
    } 
    cout << "La suma total es: " << suma <<endl;
    return 0;
}