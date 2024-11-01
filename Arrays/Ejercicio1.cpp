#include <iostream>
using namespace std;

int main()
{
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    cout << "las vocales son: ";
    for(int i=0; i<=4;i++)
    {
        cout << " " << vocales[i];
    }
    return 0;
}