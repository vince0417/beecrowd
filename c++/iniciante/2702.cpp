//Escolha Difícil
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> refeicoes;

    for (int i = 0; i < 3; i++)
    {
        int refeicao{};
        cin >> refeicao;
        refeicoes.push_back(refeicao); 
    }
    
    int resultado{};
    for (int i = 0; i < 3; i++)
    {
        int escolha{};
        cin >> escolha;
        if (escolha >= refeicoes.at(i)) resultado += (escolha-refeicoes.at(i));
    }

    cout << resultado << "\n";
    return 0;
}
