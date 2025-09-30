//Pedra-papel-tesoura-lagarto-Spock
#include <bits/stdc++.h>
using namespace std;

void resultado(string& sheldon, string& rajesh); //Protótipo;

int main() {
    int num{}; //Casos de teste;
    cin >> num;
    for (size_t i = 0; i < num; i++) {
        string sheldon, rajesh; //Jogadores/escolhas;
        cin >> rajesh >> sheldon;
        if (sheldon == rajesh) {
            cout << "empate\n";
            continue;
        }
        resultado(sheldon,rajesh);
    }
    
    return 0;
}

void resultado(string& sheldon, string& rajesh) {
    vector<string> escolhas{
        {"tesoura papel"},{"papel pedra"},
        {"pedra lagarto"},{"lagarto spock"},
        {"spock tesoura"},{"tesoura lagarto"},
        {"lagarto papel"},{"papel spock"},
        {"spock pedra"},{"pedra tesoura"}
    }; //Sequencia que garante vitória para rajesh. Invertida, é sheldon o vencedor.

    string temp = rajesh + ' ' + sheldon; //Facilitar a consulta;
    for (size_t i {}; i < escolhas.size(); i++){
        if (temp == escolhas.at(i)) {
            cout << "rajesh\n";
            return; //Encerra, uma vez que rajesh já ganhou esta rodada;
        }
    }
    cout << "sheldon\n";
}