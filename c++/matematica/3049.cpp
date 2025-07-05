//Nota Cortada
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int inicioCorte{}, fimCorte{};
    cin >> inicioCorte >> fimCorte;

    if ((inicioCorte+fimCorte) < 160) cout << 2 << "\n";
    else if ((inicioCorte+fimCorte) > 160) cout << 1 << "\n";
    else cout << 0 << "\n";
    
    return 0;
}
