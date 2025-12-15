//Escolha Difícil
#include <stdio.h>

int main()
{
    int refeicoes[3];

    for (int i = 0; i < 3; i++)
    {
        int refeicao;
        scanf("%d", &refeicao);
        refeicoes[i] = refeicao;
    }
    
    int resultado = 0;
    for (int i = 0; i < 3; i++)
    {
        int escolha;
        scanf("%d", &escolha);
        if (escolha >= refeicoes[i]) resultado += (escolha-refeicoes[i]);
    }

    printf("%d\n", resultado);
    return 0;
}
