//Preenchimento de Vetor I
#include <iostream>
using namespace std;

int main () {
    int resultado = 0, num, n[10];

    cin >> num;
    resultado = num;
    for (int i = 0; i < 10; i++)
    {
        cout << "N[" << i << "] = " << resultado << endl;

        resultado = resultado + resultado;
    }
    
    return 0;
}
