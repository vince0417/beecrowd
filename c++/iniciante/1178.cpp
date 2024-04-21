//Preenchimento de Vetor III
#include <iostream>
using namespace std;

int main () {
    int n[100];
    double x;
    cin >> x;

    cout.precision(4);
    cout.setf(ios::fixed);

    for (int i = 0; i < 100; i++)
    {
        cout << "N[" << i << "] = " << x << endl;

        x = x/2;
    }
    
    return 0;
}
