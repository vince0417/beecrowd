// Andando no Tempo
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> viagens(3);
    for(int i{}; i < 3; ++i) cin >> viagens.at(i);
    sort(viagens.begin(), viagens.end()); //Organiza os elementos em ordem crescente;

    if((viagens.at(0)+viagens.at(1)) == viagens.at(2)) cout << "S\n";
    else if(viagens.at(0) == viagens.at(1) || viagens.at(0) == viagens.at(2) || viagens.at(1) == viagens.at(2))
        cout << "S\n";
    else cout << "N\n";
    return 0;
}
