//Pedra, Papel, Ataque Aéreo
#include <bits/stdc++.h>
using namespace std;

void resultado(string jogador1, string jogador2); //Protótipo;

int main() {
    int num; //Casos de teste;
    cin >> num;
    for (size_t i {}; i < num; ++i) {
        string jogador1, jogador2; //Jogador/escolha;
        cin >> jogador1 >> jogador2;
        if (jogador1 == jogador2) {
            if (jogador1 == "ataque") cout << "Aniquilacao mutua\n";
            else if (jogador1 == "pedra") cout << "Sem ganhador\n";
            else cout << "Ambos venceram\n";
            continue;
        }
        resultado(jogador1,jogador2);
    }
    return 0;
}

void resultado(string jogador1, string jogador2) {
    string temp = jogador1 + " " + jogador2;
    vector<string> aux{"ataque papel", "pedra papel", "ataque pedra"};
    for (int i {}; i < 3; ++i) {
        if (temp == aux.at(i)){
            cout << "Jogador 1 venceu\n";
            return;
        }
    }
    cout << "Jogador 2 venceu\n";
}
