#include <iostream>
using namespace std;

// Escribir un programa que calcule el sueldo que le corresponde al trabajador de una empresa
// que cobra 40.000 euros anuales, el programa debe realizar los cálculos en función de los
// siguientes criterios:
// a. Si lleva más de 10 años en la empresa se le aplica un aumento del 10%.
// b. Si lleva menos de 10 años pero más que 5 se le aplica un aumento del 7%.
// c. Si lleva menos de 5 años pero más que 3 se le aplica un aumento del 5%.
// d. Si lleva menos de 3 años se le aplica un aumento del 3%.

int main()
{
    int edad_empresa; 
    float sueldo_base = 40000; 
    float sueldo;

    cout << "Ingresa la cantidad de tiempo en la empresa: "; 
    cin >> edad_empresa;

    // Condiciones para calcular el sueldo basado en la antigüedad
    if (edad_empresa > 10) 
    {
        sueldo = sueldo_base + (sueldo_base * 0.10); // Aumento del 10%
    } 
    else if (edad_empresa > 5) 
    {
        sueldo = sueldo_base + (sueldo_base * 0.07); // Aumento del 7%
    } 
    else if (edad_empresa > 3) 
    {
        sueldo = sueldo_base + (sueldo_base * 0.05); // Aumento del 5%
    } 
    else 
    {
        sueldo = sueldo_base + (sueldo_base * 0.03); // Aumento del 3%
    }

    // Muestra el resultado
    cout << "Su sueldo es: " << sueldo << " euros." << endl;

    return 0;
}
