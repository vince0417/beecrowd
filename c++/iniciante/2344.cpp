//Notas da Prova
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nota;
    cin >> nota;

    if (nota == 0) cout << "E\n";
    else if (nota >= 1 and nota <= 35) cout << "D\n";
    else if (nota >= 36 and nota <= 60) cout << "C\n";
    else if (nota >= 61 and nota <= 85) cout << "B\n";
    else if (nota >= 85 and nota <= 100) cout << "A\n";

    return 0;
}
