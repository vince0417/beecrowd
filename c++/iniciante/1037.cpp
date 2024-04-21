//Intervalo
#include <bits/stdc++.h>
using namespace std;

int main() {
    double num;
    cin >> num;

    if (num >= 0.00 and num <= 25.00)
    {
        cout << "Intervalo [0,25]\n";
    }
    else if (num > 25.00 and num <= 50.00)
    {
        cout << "Intervalo (25,50]\n";
    }
    else if (num > 50.00 and num <= 75.00)
    {
        cout << "Intervalo (50,75]\n";
    }
    else if (num > 75 and num <= 100.00)
    {
        cout << "Intervalo (75,100]\n";
    }
    else
        cout << "Fora de intervalo\n";

    return 0;
}
