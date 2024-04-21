//Positivos e Média
#include <iostream>
using namespace std;

int main () {
    int num = 6, maiores = 0;
    float soma, n, resultado;

    for (int i = 0; i < num; i++)
    {
        cin >> n;
        if (n>0)
        {
            soma = soma + n;
            maiores++;
        }
        
    }

    cout << maiores << " valores positivos" << endl;
    resultado = soma/maiores;

    cout.precision(1);
    cout.setf(ios::fixed);
    cout << resultado << endl;

    return 0;
}
