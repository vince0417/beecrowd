// /Múltiplos
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a%b == 0 or b%a == 0)
    {
        cout << "Sao Multiplos\n";
    }
    else
        cout << "Nao sao Multiplos\n";

    return 0;
}
