//Lista de Compras
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int casosT{};
    cin >> casosT;

    cin.ignore();
    for (int i = 0; i < casosT; i++)
    {
        string item, itens;
        getline(cin, itens);

        set<string> lista;
        stringstream aux(itens);
        while (aux >> item)
        {
            lista.insert(item);
        }
        
        for (auto it : lista)
        {
            if (it == *lista.begin()) cout << it;
            else cout << " " << it;
        }
        cout << "\n";
    }
    
    return 0;
}
