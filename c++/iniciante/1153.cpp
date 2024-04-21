//Fatorial Simples
#include <iostream>
using namespace std;

int main() {
    int num, resultado = 0;

    cin >> num;
    resultado = num;
    for (int i = num-1; i > 0 ; i--)
    {
        resultado = resultado*i;
    }
    
    cout << resultado << endl;
    return 0;
}
