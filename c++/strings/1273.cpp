//Justificador
#include <bits/stdc++.h>
using namespace std;

int main(){
    std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0); //Imprime a saída somente ao finalizar;

    int num{}, it{};
    while(cin >> num){
        if(num == 0) break;

        int tamanho{}; //Irá guardar o tamanho da maior palavra;
        vector<string> palavras;
        for(int i{}; i < num; ++i){
            string palavra;
            cin >> palavra;
            if(palavra.length() > tamanho) tamanho = palavra.length(); //Verifica o tamanho da palavra lida;
            palavras.push_back(palavra);
        }

        if(it >= 1) cout << '\n'; //Quebra de linha entre as saidas dos casos de teste, sem contar o último;
        for(int i{}; i < num; ++i){
            int aux = tamanho-palavras[i].length(); //A maior palavra dita quantos espaços terá à esquerda das demais, aux os guarda, subtraindo o tamanho da atual do tamanho da maior;
            palavras[i].insert(palavras[i].begin(),aux,' '); //É adicionado á palavra atual, quantidade de espaços necessários para igualar ao tamanho da maior palavra;
            cout << palavras.at(i) << '\n';
        }
        it++;
    }
    return 0;
}
