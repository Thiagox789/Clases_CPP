#include <iostream>
using namespace std;

int main()
{
    float pi, radio, area, peri;
    pi = 3.1415;

    cout << "Ingresa el radio: ";
    cin >> radio;

    area = pi * radio * radio;  
    peri = 2 * pi * radio;

    cout << endl;
    cout << "El area es: " << area << endl;  
    cout << "El perimetro es: " << peri << endl; 
    cout << "El radio es: " << radio << endl;

    return 0;
}
