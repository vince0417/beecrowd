//Achando os Monótonos Não-Triviais Maximais
#include <bits/stdc++.h>
using namespace std;

/*
    Dada uma sequência composta apenas por caracteres “a” e “b”, determine 
    quantos caracteres “a” ocorrem em trechos monótonos maximais não-triviais. 
*/

int main()
{
    int num{}; // O tamanho que será a sequência.
    string sequencia{};
    cin >> num >> sequencia;
    
    int aux{}, cont{};
    for (unsigned i = 1; i < sequencia.size(); i++)
    {
        if (sequencia.at(i) == 'a' and sequencia.at(i-1) == 'a')
        {
            (aux >= 1) ? aux++ : aux+=2;
        }
        else{
            cont += aux;
            aux = 0;
        }
    
    }
    
    cont += aux;
    (cont == 1) ? cout << (cont-1) << '\n' : cout << cont << '\n'; 
    return 0;
}
