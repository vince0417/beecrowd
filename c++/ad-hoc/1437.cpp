//Esquerda, Volver!
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int comandos{}; //Total de comandos emitidos pelo sargento;
    int recruta{1}; //Posição inicial do recruta, usaremos para identificar a posição final;
    char direcoes[4] = {'O','N','L','S'}; //Pontos cardeais;

    while (cin >> comandos)
    {
        if (comandos == 0) break;
        string sequencia;
        cin >> sequencia;
        for (size_t i {}; i < sequencia.length(); i++)
        {
            if (sequencia.at(i) == 'D') ++recruta;
            else --recruta;
            if (recruta > 3) recruta = 0;
            if (recruta < 0) recruta = 3;
        }
        cout << direcoes[recruta] << '\n';
        recruta = 1;
    }
    return 0;
}
