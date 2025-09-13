//Esquerda, Volver!
#include <stdio.h>
#include <string.h>

int main()
{
    int comandos = 0; //Total de comandos emitidos pelo sargento;
    int recruta = 1; //Posição inicial do recruta, usaremos para identificar a posição final;
    char direcoes[4] = {'O','N','L','S'}; //Pontos cardeais;

    while (scanf("%d", &comandos))
    {
        if (comandos == 0) break;
        char sequencia[1000];
        scanf("%s", sequencia);
        for (size_t i = 0; sequencia[i] != '\0'; ++i)
        {
            if (sequencia[i] == 'D') ++recruta;
            else --recruta;
            if (recruta > 3) recruta = 0;
            if (recruta < 0) recruta = 3;
        }
        printf("%c\n", direcoes[recruta]);
        recruta = 1;
    }
    return 0;
}
