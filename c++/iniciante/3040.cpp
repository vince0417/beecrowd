//A Árvore de Natal
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int altura, tronco, galhos;
        cin >> altura >> tronco >> galhos;

        if (altura >= 200 and altura <= 300 and
        tronco >= 50 and galhos >= 150)
        {
            cout << "Sim\n";
        }
        else cout << "Nao\n";
    }
    

    return 0;
}
