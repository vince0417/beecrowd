//Bilhetes Falsos
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bilhetes{}, pessoas{};

    while (cin >> bilhetes >> pessoas)
    {
        if (bilhetes == 0 and pessoas == 0) break;

        vector<int> total{};
        for (int i {}; i < pessoas; i++)
        {
            int aux{};
            cin >> aux;
            total.push_back(aux);
        }

        int cont{}; // Conta os bilhetes falsos.
        sort(total.begin(), total.end()); // Ordena o vetor para ficar mais fácil encontrar os falsos.
        for (unsigned i {1}; i < total.size(); i++)
        {
            if (total.at(i) == total.at(i-1)) cont++;
            if (i>=3){
                if (total.at(i) == total.at(i-2)) cont--;
            }
        }

        cout << cont << '\n';
    }
    
    return 0;    
}

// Este algoritmo entrega quantos bilhetes foram falsificados.
