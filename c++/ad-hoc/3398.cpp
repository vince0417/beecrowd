//Moeda Convertida
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    float cotacao {}, moeda {};

    cout.precision(2);
    cout.setf(ios::fixed);
    while (cin >> cotacao >> moeda)
    {
        float resultado = (moeda*cotacao);
        cout << resultado << '\n';
    }

    return 0;
}
