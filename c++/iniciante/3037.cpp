//Jogando Dardos Por Distância
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int casosT{};
    cin >> casosT;
    for (int i {}; i < casosT; i++)
    {
        int pontosMaria{}, pontosJoao{};
        for (int x {}; x < 6; x++)
        {
            int pontuacao{}, distancia{};
            cin >> pontuacao >> distancia;
            if (x <= 2) pontosJoao += (pontuacao*distancia);
            else pontosMaria += (pontuacao*distancia);
        }
        if (pontosMaria > pontosJoao) cout << "MARIA\n";
        else cout << "JOAO\n";
    }
    
    return 0;
}
