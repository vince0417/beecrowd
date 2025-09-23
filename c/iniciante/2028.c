//Sequência de Sequência
#include <stdio.h>

void sequencia(int num, int it); //Protótipo;

int main() {
    int num = 0, it = 1;
    while (scanf("%d", &num) != EOF)
    {
        sequencia(num,it);
        printf("\n\n");
        ++it;
    }
    return 0;
}

void sequencia(int num, int it) {
    int soma = 1;
    soma += (1+num)*(num)/2; //Soma dos elementos de uma sequencia em ordem crescente;
    if (soma == 1) printf("Caso %d: %d numero\n", it, soma);
    else printf("Caso %d: %d numeros\n", it, soma);

    printf("0");
    for (size_t i = 1; i <= num; ++i)
    {
        for (size_t x = 0; x < i; x++)
        {
            printf(" %d", i);
        }
    }
}
