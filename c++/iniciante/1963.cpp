//O Filme
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float valor1, valor2;
    cin >> valor1 >> valor2;

    float aumento = ((valor2-valor1)/valor1)*100.00;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << aumento << "%\n";
    return 0;
}
