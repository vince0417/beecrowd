//A Greve para ou Continua?
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int dinheiro {}, gastos {};
    for (int i {}; i < num; i++)
    {
        int valores {};
        char letra;
        cin >> letra >> valores;

        if (letra == 'G') gastos += valores;
        else dinheiro += valores;
    }
    
    if ((dinheiro-gastos) > 0) cout << "A greve vai parar.\n";
    else cout << "NAO VAI TER CORTE, VAI TER LUTA!\n";
    return 0;
}
