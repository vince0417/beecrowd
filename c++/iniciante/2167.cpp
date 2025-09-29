//Falha do Motor
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0); //As saídas são exibidas ao fim da execução;

    int medidas; //Total de medidas/
    cin >> medidas;
    int medida{}, anterior{}, local{}; //Cada medida e medida anterior;
    for (size_t i = 1; i <= medidas; i++)
    {
        cin >> medida;
        if (i > 1) {
            if (medida < anterior && local == 0) {
                cout << i << "\n";
                ++local;
            }
        }
        anterior = medida;
    }
    if (local == 0) cout << "0\n";
    return 0;
}
