//Pedra-papel-tesoura-lagarto-Spock
#include <stdio.h>
#include <string.h>

void resultado(char sheldon[20], char rajesh[20]); //Protótipo;

int main() {
    int num = 0; //Casos de teste;
    scanf("%i", &num);
    for (size_t i = 0; i < num; i++) {
        char sheldon[20], rajesh[20]; //Jogadores/escolhas;
        scanf("%s%s", rajesh, sheldon);
        if (strcmp(sheldon,rajesh) == 0) {
            printf("empate\n");
            continue;
        }
        resultado(sheldon,rajesh);
    }
    
    return 0;
}

void resultado(char sheldon[20], char rajesh[20]) {
    char escolhas[10][20] = {
        "tesoura papel","papel pedra",
        "pedra lagarto","lagarto spock",
        "spock tesoura","tesoura lagarto",
        "lagarto papel","papel spock",
        "spock pedra","pedra tesoura"
    }; //Sequencia que garante vitória para rajesh. Invertida, é sheldon o vencedor.

    char temp[20];
    strcat(rajesh, " ");
    sprintf(temp, "%s%s", rajesh, sheldon);
    for (size_t i = 0; i < 10; i++){
        if (strcmp(temp,escolhas[i]) == 0) {
            printf("rajesh\n");
            return; //Encerra, uma vez que rajesh já ganhou esta rodada;
        }
    }
    printf("sheldon\n");
}