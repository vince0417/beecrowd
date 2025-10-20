//Relógio Antigo
#include <stdio.h>

int main()
{
    int hora = 0, minuto = 0;
    while (scanf("%d%d", &hora, &minuto) != EOF) //Enquanto não atingir final de arquivo;
    {
        hora /= 30;
        minuto /= 6;

        if (hora < 10 && minuto < 10)
            printf("0%d:0%d\n", hora, minuto);
        else if (hora < 10)
            printf("0%d:%d\n", hora, minuto);
        else if (minuto < 10 )
            printf("%d:0%d\n", hora, minuto);
        else printf("%d:%d\n", hora, minuto);
    }
    return 0;
}
