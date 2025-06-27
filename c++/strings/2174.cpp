//Coleção de Pomekon
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int casos{}, igual{};
    cin >> casos;

    string pokemon{};
    set<string> pokemons{};
    for (int i = 0; i < casos; i++)
    {
        cin >> pokemon;
        pokemons.insert(pokemon); // Adiciona pokemon à pokemons se ainda não tiver;
    }
    
    int capturados = pokemons.size();
    cout << "Falta(m) " << (151-capturados) << " pomekon(s)." << "\n";
    return 0;
}
