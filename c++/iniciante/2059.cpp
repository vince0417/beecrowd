//Ímpar, Par ou Roubo
#include <bits/stdc++.h>
using namespace std;

int main() {
    int jogador1{}, escolha1{}, escolha2{}, roubo{}, acusado{};
    cin >> jogador1 >> escolha1 >> escolha2 >> roubo >> acusado;

    int soma = (escolha1+escolha2);
    if (jogador1 == 1){
        if (roubo == 1 && acusado == 0 || roubo == 0 && acusado == 0 && soma%2 == 0
            || roubo == 0 && acusado == 1 && soma%2 == 0){
            cout << "Jogador 1 ganha!\n";
        }
        else cout << "Jogador 2 ganha!\n";
    }else {
        if (roubo == 1 && acusado == 0 || roubo == 0 && acusado == 0 && soma%2 == 1
            || roubo == 0 && acusado == 1 && soma%2 == 1){
            cout << "Jogador 1 ganha!\n";
        }
        else cout << "Jogador 2 ganha!\n";
    }
    return 0;
}

//Lendo o que o problema pede, torna-se simples compreender este código;
