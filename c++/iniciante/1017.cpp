//Gasto de Combustível
#include <bits/stdc++.h>
using namespace std;

int main() {
    int hora, km;
    cin >> hora >> km;

    cout.precision(3);
    cout.setf(ios::fixed);
    cout << (double)(hora*km)/12 << endl;
    return 0;
}
