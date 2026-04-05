//Jogo do Tijolo
#include <bits/stdc++.h>
using namespace std;

int main(){
    int casosT{}; // Casos de teste;
    cin >> casosT;

    for (int c = 1; c <= casosT; c++){
        int membros{}; // Membros da equipe;
        cin >> membros;
        vector<int> equipe;
        for (int i{}; i < membros; i++){
            int idade{}; // Idade de cada membro;
            cin >> idade;
            equipe.push_back(idade);
        }
        sort(equipe.begin(),equipe.end()); // Organizando a equipe em ordem crescente de acordo com a idade;
        int capitao = equipe.size()/2;
        capitao = equipe.at(capitao); // A idade do capitão será a mediana das idades dos membros da equipe;
        cout << "Case " << c << ": " << capitao << '\n';
    }
    return 0;
}
