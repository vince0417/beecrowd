//Sequência de Sequência
#include <bits/stdc++.h>
using namespace std;

void sequencia(int num, int it); //Protótipo;

int main() {
    int num{}, it{1};
    while (cin >> num)
    {
        sequencia(num,it);
        cout << "\n\n";
        ++it;
    }
    return 0;
}

void sequencia(int num, int it) {
    int soma{1};
    soma += (1+num)*(num)/2; //Soma dos elementos de uma sequencia em ordem crescente;
    if (soma == 1) cout << "Caso " << it << ": " << soma << " numero\n";
    else cout << "Caso " << it << ": " << soma << " numeros\n";

    cout << 0;
    for (size_t i {1}; i <= num; ++i)
    {
        for (size_t x = 0; x < i; x++)
        {
            cout << " " << i;
        }
    }
}
