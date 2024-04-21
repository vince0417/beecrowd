//Tempo de Jogo
#include <stdio.h>

int main() {
    int x, y, duracao = 0;
    scanf("%d %d", &x, &y);

    if (x > y)
    {
        int h1 = 0, h2 = 0;
        for (int i = x; i < 24; i++)
        {
            h1 += 1;
        }
        for (int i = 0; i < y; i++)
        {
            h2 += 1;
        }

        duracao = h1 + h2;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
            
    }
    else if (x < y)
    {
        for (int i = x; i < y; i++)
        {
            duracao += 1;
        }
        printf("O JOGO DUROU %d HORA(S)\n", duracao);

    }
    else{
        duracao = 24;
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }
    
    return 0;
}
