//Quadrado de Pares
#include <iostream>
using namespace std;

int main () {
    int num, resultado = 0;
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (i%2 == 0)
        {
            cout << i << "^2 = ";
            resultado = i*i;
            cout << resultado << endl;
        }
        
    }
    
    return 0;
}
