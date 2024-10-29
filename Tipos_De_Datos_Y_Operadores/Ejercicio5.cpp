#include <iostream>
using namespace std;

int main() {
    float litros, kilometros, consumo;

    cout << "Ingresa la cantidad de litros: ";
    cin >> litros;

    cout << "Ingresa los Km recorridos: ";
    cin >> kilometros;
    
    consumo = kilometros / litros; 
    cout << endl;
    cout << "El consumo de combustible es: " << consumo << " km/lt" << endl;
    
    return 0;
}
