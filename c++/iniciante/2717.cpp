//Tempo do Duende
#include <bits/stdc++.h>
using namespace std;

int main() {
    int minutos, tP1, tP2;
    cin >> minutos >> tP1 >> tP2;
    if ((tP1+tP2) <= minutos) cout << "Farei hoje!\n";
    else cout << "Deixa para amanha!\n";
    return 0;
}
