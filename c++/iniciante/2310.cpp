//Voleibol
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num; //Total de jogadores;
    cin >> num;

    vector<float> total(3), acertos(3);
    for (size_t i {}; i < num; ++i)
    {
        string nome{}; //Nome do jogador;
        cin >> nome;

        float totalSBA{}; //Total de saques, bloqueios e ataques deste jogador;
        for (int it {}; it < 3; ++it) {
            cin >> totalSBA;
            total.at(it) += totalSBA;
        }
        
        float acertosSBA{}; //Total de acertos de saques, bloqueios e ataques deste jogador;
        for (int it {}; it < 3; ++it) {
            cin >> acertosSBA;
            acertos.at(it) += acertosSBA;
        }
    }
    
    //Porcentagem geral de acertos;
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << "Pontos de Saque: " << (acertos.at(0)/total.at(0))*100 << " %.\n";
    cout << "Pontos de Bloqueio: " << (acertos.at(1)/total.at(1))*100 << " %.\n";
    cout << "Pontos de Ataque: " << (acertos.at(2)/total.at(2))*100 << " %.\n";
    return 0;
}
