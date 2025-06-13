//Fuso Horário
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int saida{}, viagem{}, fuso{};
    cin >> saida >> viagem >> fuso; // Em sequência pegam hora de saída, tempo de viagem e fuso horário do destino.
    
    if ((saida+viagem+fuso) >= 24)
        cout << (saida+viagem+fuso) - 24 << "\n";
    else if ((saida+viagem) < 5 && fuso < 0)
    {
        if ((saida+viagem+24) + fuso == 24)
            cout << 0 << "\n";
        else
            cout << (saida+viagem+24) + fuso << "\n";
    }
    else 
        cout << (saida+viagem+fuso) << "\n";

    return 0;
}
