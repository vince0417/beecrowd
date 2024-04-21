//Esfera
#include <bits/stdc++.h>
using namespace std;

int main() {
    int raio;
    double pi = 3.14159;
    cin >> raio;

    cout.precision(3);
    cout.setf(ios::fixed);
    cout << "VOLUME = " << (4.0/3)*pi*pow(raio,3) << endl;
    return 0;
}
