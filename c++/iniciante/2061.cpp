//As Abas de Péricles
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int abertas, acao;
    cin >> abertas >> acao;

    string seq;
    for (int i = 0; i < acao; i++)
    {
        cin >> seq;
        if (seq == "fechou") abertas++;
        else if (seq == "clicou") abertas--;
        
    }

    cout << abertas << endl;
    return 0;
}
