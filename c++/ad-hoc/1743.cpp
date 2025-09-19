//Máquina de Verificação Automatizada
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> conector1(5);
    vector<int> conector2(5);

    for (size_t i {}; i < 5; ++i) {
        cin >> conector1.at(i);
    }
    int cont {};
    for (size_t i {}; i < 5; ++i) {
        cin >> conector2.at(i);
        if (conector1.at(i) != conector2.at(i)) ++cont;
    }
    if (cont == 5) cout << "Y\n";
    else cout << "N\n";
    return 0;
}
