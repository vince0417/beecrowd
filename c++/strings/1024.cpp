//Criptografia
#include <bits/stdc++.h>
using namespace std;

void enigma(string);

int main() {
    int casosT{};
    cin >> casosT;
    cin.ignore();
    for (size_t i{}; i < casosT; ++i){
        string msg; // Mensagem que será criptografada;
        getline(cin,msg);
        enigma(msg);
    }
    
    return 0;
}

// Função responsável por criptografar a mensagem;
void enigma(string msg){
    string alfabeto{"abcdefghijklmnopqrstuvwxyz"}; // Ajudar a diferenciar se o caractere é uma letra ou não;
    for (size_t i{}; i < msg.length(); ++i){ 
        // Converte o caractere em minúsculo e busca ele em nosso alfabeto;
        if(alfabeto.find(towlower(msg.at(i))) != string::npos){
            msg.at(i) += 3; // Aqui é usado uma adição com base nos caracteres e suas posições na ASCII;
        }
    }
    reverse(msg.begin(), msg.end()); // Inverte inicio e fim;
    for (size_t i = (msg.length()/2); i < msg.length(); ++i){
        msg.at(i) -= 1;
    }
    cout << msg << '\n';
}

// Para entender melhor este algoritmo, busque ler o problema na plataforma beecrowd;