//Rico do Mate
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pessoas{}; //Total de pessoas;
    float termica{}, cuia{}; //Quantidade de char na térmica e quanto cabe na cuia;

    cin >> pessoas >> termica >> cuia;

    vector<string> participantes; //Guarda todas as pessoas participantes;
    for (int i = 0; i < pessoas; i++){
        string pessoa;
        cin >> pessoa;
        participantes.push_back(pessoa);
    }

    int i{};
    string ricoDoMate = participantes.at(0); //Inicializado caso a quantidade de chá seja <= capacidade da cuia;
    while (termica > cuia) {
        termica -= cuia;
        if (i < participantes.size()) ++i;
        if (i == participantes.size()) i = 0;
        ricoDoMate = participantes.at(i);
    }

    cout.precision(1);
    cout.setf(ios::fixed);
    cout << ricoDoMate << " " << termica << "\n";
    return 0;
}

//O laço da linha 21 representa a roda de chá e cada repetição uma pessoa toma uma cuia;