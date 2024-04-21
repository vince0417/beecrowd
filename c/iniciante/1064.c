//Positivos e Média
#include <stdio.h>

int main () {
    int num = 6, maiores = 0;
    float soma, n, resultado;

    for (int i = 0; i < num; i++)
    {
        scanf("%f", &n);
        if (n>0)
        {
            soma = soma + n;
            maiores++;
        }
        
    }

    printf("%d valores positivos\n", maiores);
    resultado = soma/maiores;
    printf("%.1f\n", resultado);

    return 0;
}
