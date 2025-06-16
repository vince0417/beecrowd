//Conversa Internacional
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int casos{}; // Número de casos de teste;
    cin >> casos;

    for (int caso{1}; caso <= casos; caso++)
    {
        int totalPessoas{}, diferente{};
        cin >> totalPessoas;
        vector<string> idiomas(totalPessoas); // Guarda o idioma falado por cada pessoa;
        cin >> idiomas.at(0);
        for (int i {1}; i < totalPessoas; i++)
        {
            cin >> idiomas.at(i);
            if (idiomas.at(i) != idiomas.at(i-1)) diferente++; // Verifica se essa pessoa fala o mesmo idioma que a anterior;
        }
        if (diferente != 0) cout << "ingles\n";
        else cout << idiomas.at(0) << "\n";
    }
    
    return 0;
}
