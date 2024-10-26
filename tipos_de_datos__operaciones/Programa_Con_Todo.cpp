#include <iostream>
using namespace std;
int variableglobal=11;
int main()
{
    int variable1=10;
    cout << "La variable local es: " << variable1 << endl;
	cout << "La variable global es: " << variableglobal << endl;
	int num1=10;
	int num2=11;
	int sum=num1+num2;
	
	int prod=num1*num2;
	
	float divicion=num1/num2;
	
	float resto=num1 % num2;
	
	cout << "La suma de num1 + num2 es: " << sum << endl;
	cout << "el producto de num1 * num2 es: " << prod << endl;
	cout << "el cociente de num1 / num2 es: " << divicion << endl;
	cout << "el resto de num1 y num2 es: " << resto << endl;
    return 0;
}