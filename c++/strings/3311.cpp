//Hudinho e o seu Trabalho
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int contatos{}; // Total de contatos na agenda;
    cin >> contatos;

    vector<string> agenda; // Agenda que conterá os nomes de cada contato;
    for (int i {}; i < contatos; i++)
    {
        string nome; // Nome da pessoa;
        cin >> nome;
        agenda.push_back(nome);
    }

    vector<char> abc{'A','B','C','D','E','F','G','H','I','J','K','L','M','N',
    'O','P','Q','R','S','T','U','V','W','X','Y','Z'}; // Alfabeto;
    for (int i {}; i < abc.size(); i++) // Itera pelas letras do alfabeto;
    {
        for (int x {}; x < agenda.size(); x++) // Itera pela agenda para exibirmos os nomes em ordem alfabética;
        {
            if (agenda.at(x).at(0) == abc.at(i)) cout << agenda.at(x) << "\n";
        }
        
    }
    return 0;
}
