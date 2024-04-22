//Colchão
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int colchao[3], pH, pL;
    for (int i = 0; i < 3; i++) cin >> colchao[i];
    cin >> pH >> pL;

    if ((colchao[0] <= pL and colchao[1] <= pH) or
        (colchao[1] <= pL and colchao[0] <= pH) or
        (colchao[1] <= pL and colchao[2] <= pH) or
        (colchao[2] <= pL and colchao[1] <= pH) or
        (colchao[0] <= pL and colchao[2] <= pH) or
        (colchao[2] <= pL and colchao[0] <= pH)) cout << "S\n";
    else cout << "N\n";
    
    return 0;
}
