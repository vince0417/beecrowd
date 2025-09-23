//Galopeira
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    cout.precision(2);
    cout.setf(ios::fixed);
    for (size_t i {}; i < num; ++i)
    {
        string palavra;
        cin >> palavra;
        double letras = palavra.size();
        cout << (letras/100) << "\n";
    }
    return 0;
}
