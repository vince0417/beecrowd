//Jogatina UFPR
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num{}, playerCod{}; //Números de jogadores e código do jogador escolhido.
    
    while (cin >> num >> playerCod)
    {
        int  cont{}; //Conta quantas vezes ele jogou determinado jogo.
        for (int i {}; i < num; ++i)
        {
            int cod{}; //Código do jogador da vez.
            bool game{}; //0 significa que jogou CS, 1 que jogou LOL.
            cin >> cod >> game;
            
            if (cod == playerCod and game == 0) cont++;
        }
    
        cout << cont << '\n';
    }
    return 0;
}
