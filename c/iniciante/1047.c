//Tempo de Jogo com Minutos
#include <stdio.h>

int main() {
    int hI, mI, hF, mF;
    scanf("%d %d %d %d", &hI, &mI, &hF, &mF);

    if (hI == hF && mI == mF)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        return 0;
    }
    
    int hora = 0, minuto = 0;
    while (1)
    {
        if (hI == hF && mI == mF)
        {
            break;
        }
        
        if (hI == 24)
        {
            hI = 0;
        }
        
        if (mI == 60)
        {
            hI += 1;
            mI = 0;
        }

        if (minuto == 60)
        {
            hora += 1;
            minuto = 0;
        }
        minuto++;
        mI++;
        
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);
    return 0;
}

