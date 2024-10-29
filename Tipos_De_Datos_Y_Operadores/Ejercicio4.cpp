#include <iostream>
using namespace std;

int main() {
    float metros, centimetros, milimetros, pulgadas;

    cout << "Ingresa la cantidad de metros: ";
    cin >> metros;

    centimetros = metros * 100;
    milimetros = metros * 1000;
    pulgadas = centimetros / 2.54;

    cout << endl;
    cout << metros << " metros son a:" << endl;
    cout << centimetros << " centimetros" << endl;
    cout << milimetros << " milimetros" << endl;
    cout << pulgadas << " pulgadas" << endl;

    return 0;
}
