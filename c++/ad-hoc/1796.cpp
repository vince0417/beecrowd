//Economia Brasileira
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, sim {0}, nao {0};
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int voto;
        cin >> voto;

        if (voto == 1) nao++;
        else sim++;
    }
    
    if (sim > nao) cout << "Y\n";
    else cout << "N\n";
    return 0;
}
