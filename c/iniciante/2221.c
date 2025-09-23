//Batalha de Pomekons
#include <stdio.h>

int main() {
    int num;
    scanf("%i", &num);

    for (size_t i = 0; i < num; ++i)
    {
        int bonus = 0;
        int jogador1[3], jogador2[3]; //Respectivamente ataque e defesa do pomekon e level do treinador;

        scanf("%d", &bonus);
        scanf("%d%d%d", &jogador1[0], &jogador1[1], &jogador1[2]);
        scanf("%d%d%d", &jogador2[0], &jogador2[1], &jogador2[2]);

        int pomekon1 = (jogador1[0]+jogador1[1])/2; //Calculo para o valor do golpe do pomekon;
        int pomekon2 = (jogador2[0]+jogador2[1])/2;

        //O bonus vai para o jogador cujo level é par;
        if (jogador1[2]%2 == 0) pomekon1 += bonus;
        if (jogador2[2]%2 == 0) pomekon2 += bonus;

        if (pomekon1 > pomekon2) printf("Dabriel\n");
        else if (pomekon1 < pomekon2) printf("Guarte\n");
        else printf("Empate\n");
    }
    return 0;
}
