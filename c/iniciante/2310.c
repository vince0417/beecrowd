//Voleibol
#include <stdio.h>
#include <string.h>

int main() {
    int num; //Total de jogadores;
    scanf("%i", &num);

    double total[3] = {}, acertos[3] = {};
    for (size_t i = 0; i < num; ++i)
    {
        char nome[15]; //Nome do jogador;
        scanf("%s", nome);

        double totalSBA = 0.00; //Total de saques, bloqueios e ataques deste jogador;
        for (int it  = 0; it < 3; ++it) {
            scanf("%lf", &totalSBA);
            total[it] += totalSBA;
        }
        
        double acertosSBA = 0.00; //Total de acertos de saques, bloqueios e ataques deste jogador;
        for (int it = 0; it < 3; ++it) {
            scanf("%lf", &acertosSBA);
            acertos[it] += acertosSBA;
        }
    }
    
    //Porcentagem geral de acertos;
    printf("Pontos de Saque: %.2lf %%.\n", (acertos[0]/total[0])*100.00);
    printf("Pontos de Bloqueio: %.2lf %%.\n", (acertos[1]/total[1])*100.00);
    printf("Pontos de Ataque: %.2lf %%.\n", (acertos[2]/total[2])*100.00);
    return 0;
}
