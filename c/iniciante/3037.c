//Jogando Dardos Por Distância
#include <stdio.h>

int main()
{
    int casosT = 0;
    scanf("%i", &casosT);
    for (int i = 0; i < casosT; i++)
    {
        int pontosMaria = 0, pontosJoao = 0;
        for (int x = 0; x < 6; x++)
        {
            int pontuacao = 0, distancia = 0;
            scanf("%i%i", &pontuacao, &distancia);
            if (x <= 2) pontosJoao += (pontuacao*distancia);
            else pontosMaria += (pontuacao*distancia);
        }
        if (pontosMaria > pontosJoao) printf("MARIA\n");
        else printf("JOAO\n");
    }
    
    return 0;
}
