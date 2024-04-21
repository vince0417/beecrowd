//Salário com Bônus
#include <bits/stdc++.h>
using namespace std;

int main() {
    string nome;
    double fixo, venda;
    cin >> nome >> fixo >> venda;

    cout.precision(2);
    cout.setf(ios::fixed);
    cout << "TOTAL = R$ " << fixo+((15*venda)/100) << endl;
    return 0;
}
