//Dijkstra
#include <bits/stdc++.h>
using namespace std;

int main() {
    string joia;
    set<string> joias;// Esta estrutura não aceita elementos repetidos;
    while (cin >> joia) {
        joias.insert(joia); //Insere joia à joias;
        joia.clear(); //Limpa a string joia;
    }
    
    cout << joias.size() << "\n"; //Retorna o número de elementos contidos em joias;
    return 0;
}
