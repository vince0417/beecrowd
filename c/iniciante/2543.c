//Jogatina UFPR
#include <stdio.h>

int main()
{
    int num = 0, playerCod = 0; //Números de jogadores e código do jogador escolhido.
    
    while (scanf("%d%d", &num, &playerCod) != EOF)
    {
        int  cont = 0; //Conta quantas vezes ele jogou determinado jogo.
        for (int i  = 0; i < num; ++i)
        {
            int cod, game; //Código do jogador da vez. 0 significa que jogou CS, 1 que jogou LOL.
            scanf("%d%d", &cod, &game);
            
            if (cod == playerCod && game == 0) cont++;
        }
    
        printf("%d\n", cont);
    }
    return 0;
}
