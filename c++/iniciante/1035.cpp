//Teste de Seleção 1
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b > c and d > a and c+d > a+b)
    {
        if (c > 0 and d > 0 and a%2 == 0)
        {
            cout << "Valores aceitos\n";
        }
        else{
            cout << "Valores nao aceitos\n";
        }
        
    }
    else
        cout << "Valores nao aceitos\n";

    return 0;
}
