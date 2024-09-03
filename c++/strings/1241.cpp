//Encaixa ou Não II
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    
    for (int i {}; i < num; i++)
    {
        string a {}, b {};
        cin >> a >> b;
        
        int aux = b.size()-1, aux1 = b.size();
        for (int cont = a.size()-1; cont >= 0; cont--)
        {
            if (aux == -1) break;
            if (b.at(aux) != a.at(cont)) aux1--;
            aux--;
        }
        if (a.size() < b.size()) cout << "nao encaixa\n";
        else if (aux1 == b.size()) cout << "encaixa\n";
        else cout << "nao encaixa\n";
    }

    return 0;
}
