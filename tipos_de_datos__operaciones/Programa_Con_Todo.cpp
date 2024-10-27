#include <iostream>
using namespace std;

int variableglobal = 11;

int main() {
    int variable1 = 10;
    cout << "La variable local es: " << variable1 << endl;
    cout << "La variable global es: " << variableglobal << endl;

    int num1 = 10;
    int num2 = 11;
    int sum = num1 + num2;
    int prod = num1 * num2;
    float division = static_cast<float>(num1) / num2;  // Para obtener un resultado flotante
    int resto = num1 % num2;

    cout << "La suma de num1 + num2 es: " << sum << endl;
    cout << "El producto de num1 * num2 es: " << prod << endl;
    cout << "El cociente de num1 / num2 es: " << division << endl;
    cout << "El resto de num1 y num2 es: " << resto << endl;
    return 0;
}
