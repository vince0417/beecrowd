//Há Muito, Muito Tempo Atrás
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long casos{};
    cin >> casos;
    
    int anos{};
    for (int i {}; i < casos; i++)
    {
        cin >> anos;
        
        long long saida{};
        if (anos < 2015)
            saida = anos-2015;
        else saida = anos-2014;    
        
        saida = abs(saida);
        cout << saida;
        
        if (anos >= 2015) cout << " A.C.\n";
        else cout << " D.C.\n";
    }
    
    return 0;
}
