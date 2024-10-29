#include <iostream>
using namespace std;

int main() {
    float precio1, precio2, precio3, promedio;

    cout << "Ingresa el precio1: ";
    cin >> precio1;

    cout << "Ingresa el precio2: ";
    cin >> precio2;

    cout << "Ingresa el precio3: ";
    cin >> precio3;

    promedio = (precio1 + precio2 + precio3) / 3;

    cout << endl;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
