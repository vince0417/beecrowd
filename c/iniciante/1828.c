//Bazinga!
#include <stdio.h>
#include <string.h>

void resultado(char sheldon[20], char rajesh[20], size_t i); //Protótipo;

int main() {
    int num = 0; //Casos de teste;
    scanf("%i", &num);
    for (size_t i = 0; i < num; i++) {
        char sheldon[20], rajesh[20]; //Escolhas de Sheldon e Raj;
        scanf("%s%s", sheldon, rajesh);
        if (strcmp(sheldon,rajesh) == 0) {
            printf("Caso #%ld: De novo!\n", (i+1)); //Empate;
            continue;
        }
        resultado(sheldon,rajesh,i);
    }
    
    return 0;
}

void resultado(char sheldon[20], char rajesh[20], size_t i) {
    //Guarda todos os casos onde Sheldon ganha, invertido é Raj o ganhador;
    char escolhas[10][20] = {
        {"tesoura papel"},{"papel pedra"},
        {"pedra lagarto"},{"lagarto Spock"},
        {"Spock tesoura"},{"tesoura lagarto"},
        {"lagarto papel"},{"papel Spock"},
        {"Spock pedra"},{"pedra tesoura"}
    };

    char temp[20];
    strcat(sheldon, " "); //Concatena;
    sprintf(temp, "%s%s", sheldon, rajesh); //Usei esta função de formatação para concatenar sheldon e rajesh e guardar em temp;
    for (size_t it = 0; it < 10; it++){
        if (strcmp(temp,escolhas[it]) == 0) {
            printf("Caso #%ld: Bazinga!\n", (i+1));
            return; //Encerra, uma vez que rajesh já ganhou esta rodada;
        }
    }
    printf("Caso #%ld: Raj trapaceou!\n", (i+1)); //Se chegar aqui significa que Raj ganhou;
}