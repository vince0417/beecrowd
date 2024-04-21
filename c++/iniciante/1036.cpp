//Fórmula de Bhaskara
#include <bits/stdc++.h>
using namespace std;

int main() {
    double n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    double r1, r2, delta;
    cout.precision(5);
    cout.setf(ios::fixed);
    if (n1 != 0)
    {
        delta = pow(n2,2) - (4*n1*n3);
        if (delta <= 0)
        {
            cout << "Impossivel calcular\n";
        }
        else{
            r1 = (-n2+sqrt(delta))/(2*n1);
            r2 = (-n2-sqrt(delta))/(2*n1);
            cout << "R1 = " << r1 << endl;
            cout << "R2 = " << r2 << endl;
        }
    }
    else{
        cout << "Impossivel calcular\n";
    }
    
    return 0;
}
