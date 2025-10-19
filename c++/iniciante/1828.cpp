//Bazinga!
#include <bits/stdc++.h>
using namespace std;

void resultado(string& sheldon, string& rajesh, size_t& i) {
    //Guarda todos os casos onde Sheldon ganha;
    vector<string> escolhas{
        {"tesoura papel"},{"papel pedra"},
        {"pedra lagarto"},{"lagarto Spock"},
        {"Spock tesoura"},{"tesoura lagarto"},
        {"lagarto papel"},{"papel Spock"},
        {"Spock pedra"},{"pedra tesoura"}
    };

    string temp = rajesh + ' ' + sheldon; //Concatena escolhas de Sheldon e Raj para facilitar análisar vencedor;
    for (size_t it {}; it < escolhas.size(); it++){
        if (temp == escolhas.at(it)) {
            cout << "Caso #" << (i+1) <<  ": Bazinga!\n";
            return; //Encerra esta função caso Sheldon ganhe;
        }
    }
    cout << "Caso #" << (i+1) <<  ": Raj trapaceou!\n"; //Se chegar aqui significa que Raj ganhou;
}

int main() {
    int num{}; //Casos de teste;
    cin >> num;
    for (size_t i = 0; i < num; i++) {
        string sheldon, rajesh; //Escolhas de Sheldon e Raj;
        cin >> rajesh >> sheldon;
        if (sheldon == rajesh) {
            cout << "Caso #" << (i+1) <<  ": De novo!\n"; //Empate;
            continue;
        }
        resultado(sheldon,rajesh,i);
    }
    
    return 0;
}
