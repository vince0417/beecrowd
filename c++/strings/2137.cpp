//A Biblioteca do Senhor Severino
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int casos{};

    while (cin >> casos)
    {
        string codigo{};
        vector<string> livros{};
        for (int i {}; i < casos; i++)
        {
            cin >> codigo;
            livros.push_back(codigo);
        }
        sort(livros.begin(), livros.end());
        for (auto l: livros)
            cout << l << "\n";
        
    }
    
    return 0;
}