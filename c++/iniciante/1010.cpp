//Cálculo Simples
#include <bits/stdc++.h>
using namespace std;

int main() {
    int cod, num;
    float valor, total = 0;

    for (int i = 0; i < 2; i++)
    {
        cin >> cod >> num >> valor;
        total += num*valor;
    }
    
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << "VALOR A PAGAR: R$ " << total << endl;
    return 0;
}
