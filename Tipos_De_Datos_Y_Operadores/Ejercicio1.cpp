
#include <iostream>
#include <string>
using namespace std;

//Escribir un Programa en el cual se consulte al usuario 
//que ingrese ¿cómo está el día de hoy? (soleado, nublado, lloviendo). 
//A continuación, mostrar por pantalla un mensaje que indique 
//“El día de hoy está ...”, completando el mensaje con el dato que 
//ingresó el usuario.

int main()
{
    string clima;
    cout << "Como esta el dia hoy?";
    cin >> clima;
    cout << endl;
    cout << "El dia de hoy esta " << clima << endl;
    return 0;
}