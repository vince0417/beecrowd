//Duas Notas
#include <bits/stdc++.h>
using namespace std;

// Esta função analisa se é possivel passar o troco com duas notas.
void verificaTroco(int &valorCompra, int &dinheiroCliente, vector<int> &trocosEncontrados)
{
    int troco = (dinheiroCliente-valorCompra);
    if (binary_search(trocosEncontrados.begin(), trocosEncontrados.end(), troco))
    {
        cout << "possible\n";
    }
    else
    {
        cout << "impossible\n";
    }
}

// Esta função encontra todos os trocos possiveis usando duas notas das fornecidas.
// E guarda de forma ordenada em um vector.
vector<int> geraPossiveisTrocos(vector<int> &notas)
{
    vector<int> possiveisTrocos;
    for (int i {}; i < notas.size(); i++)
    {
        for (int j {i+1}; j < notas.size(); j++)
        {
            possiveisTrocos.push_back(notas.at(i)+notas.at(j));
        }
        
    }
    sort(possiveisTrocos.begin(), possiveisTrocos.end());
    return possiveisTrocos;
}

int main()
{
    vector<int> notas{2,5,10,20,50,100};
    int valorCompra {}, dinheiroCliente {};
    
    vector<int> trocosEncontrados {geraPossiveisTrocos(notas)};

    while (cin >> valorCompra >> dinheiroCliente)
    {
        if (valorCompra == 0 and  dinheiroCliente == 0) return 0;

        verificaTroco(valorCompra,dinheiroCliente,trocosEncontrados);
    }
    
    return 0;
}
