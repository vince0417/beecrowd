//O Retorno do Rei
#include <bits/stdc++.h>
using namespace std;

int main() {
    int qtRunas, poderNecessario; // Runas exixtentes e poder necessário para vencer Gollum;
    cin >> qtRunas >> poderNecessario;

    map<char,int> runas; // Guardará as runas e os poderes associados a elas;
    for(int i = 0; i < qtRunas; i++){
        char runa;
        int poder;
        cin >> runa >> poder;
        runas.insert({runa,poder});
    }
    
    int possui, amizade{}; // Quantas runas Frodo e Sam possuem e o poder da amizade entre eles;
    cin >> possui;
    for(int i = 0; i < possui; i++){
        char runa;
        cin >> runa;
        amizade += runas[runa];
    }

    cout << amizade << '\n';
    (amizade >= poderNecessario) ? cout << "You shall pass!\n" : cout << "My precioooous\n";
    return 0;
}
