//Errrou!
#include <bits/stdc++.h>
using namespace std;

int main() {
    int casosT{};
    cin >> casosT;

    for (int i{}; i < casosT; ++i){
        char sinal{}, igual{}; // Sinal referente a operação que será realizada e sinal de igualdade;
        int  n1{}, n2{}, resposta{}; // Números usados no cálculo e resposta do participante;
        cin >> n1 >> sinal >> n2 >> igual >> resposta;

        int valor{}; // Receberá o valor exato do cálculo;
        switch(sinal){
        case '+':
            valor = (n1+n2);
            break;
        case '-':
            valor = (n1-n2);
            break;
        case 'x':
            valor = (n1*n2);
        }

        if (valor < resposta) swap(valor,resposta); //Troca os valores;
        string pronuncia((valor-resposta),'r'); // Inicia a string "pronuncia" com (valor-resposta) indices, cada contendo um 'r';
        cout << "E" << pronuncia << "ou!\n";
    }
    
    return 0;
}

// Este problema é bastante simples, a pronuncia(quantidade de 'r') será a diferença entre a resposta do participante e o valor esperado;
// Para um maior entendimento deste e de outros códigos desenvolvidos por mim, aconselho ler o que o problema pede, na plataforma beecrowd;