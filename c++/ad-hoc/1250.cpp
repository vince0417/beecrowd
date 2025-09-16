//KiloMan
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int num{}; //Casos de teste;
    cin >> num;
    for (size_t it {}; it < num; ++it)
    {
        int tiros{}; //Número total de tiros;
        string pulos{}; //Guarda sequência de pulos;
        vector<int> altTiros; //Guarda a altura de cada tiro;

        cin >> tiros;
        for (size_t i {}; i < tiros; ++i)
        {
            int tiro;
            cin >> tiro;
            altTiros.push_back(tiro);
        }
        cin >> pulos;
        int acertos{}; //Conta os aceros;
        for (size_t i {}; i < pulos.length(); ++i)
        {
            switch (pulos.at(i))
            {
            case 'S':
                if (altTiros.at(i) <= 2)
                    ++acertos;
                break;
            case 'J':
                if (altTiros.at(i) > 2)
                ++acertos;
                break;
            }
        }
        cout << acertos << "\n";
    }
    
    return 0;
}
