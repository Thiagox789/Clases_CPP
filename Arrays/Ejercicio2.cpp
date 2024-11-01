#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string nombres[6];
    
    for (int i = 0; i < 6; i++) 
    {
        cout << "Ingresa el nombre " << i + 1 << ": ";
    }
    
    // Mostramos los nombres ingresados
    cout << "\nLos nombres ingresados son:\n";
    for (int i = 0; i < 6; i++) 
    {
        cout << "Nombre " << i + 1 << ": " << nombres[i] << endl;
    }

    return 0;
}
