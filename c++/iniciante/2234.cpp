//Cachorros-Quentes
#include <bits/stdc++.h>
using namespace std;

int main() {
    int cachorros_quentes, competidores;
    cin >> cachorros_quentes >> competidores;

    float consumidos = (float)cachorros_quentes/(float)competidores;

    cout.precision(2);
    cout.setf(ios::fixed);
    cout << consumidos << endl;
    return 0;
}
