//Batalha de Pomekons
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (size_t i {}; i < num; ++i)
    {
        int bonus{};
        vector<int> jogador1(3), jogador2(3); //Respectivamente ataque e defesa do pomekon e level do treinador;

        cin >> bonus;
        cin >> jogador1.at(0) >> jogador1.at(1) >> jogador1.at(2);
        cin >> jogador2.at(0) >> jogador2.at(1) >> jogador2.at(2);

        int pomekon1 = (jogador1.at(0)+jogador1.at(1))/2; //Calculo para o valor do golpe do pomekon;
        int pomekon2 = (jogador2.at(0)+jogador2.at(1))/2;

        //O bonus vai para o jogador cujo level é par;
        if (jogador1.at(2)%2 == 0) pomekon1 += bonus;
        if (jogador2.at(2)%2 == 0) pomekon2 += bonus;

        if (pomekon1 > pomekon2) cout << "Dabriel\n";
        else if (pomekon1 < pomekon2) cout << "Guarte\n";
        else cout << "Empate\n";
    }
    return 0;
}
