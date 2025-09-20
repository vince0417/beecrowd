//Cofrinhos da Vó Vitória
#include <stdio.h>

int main()
{
    int num, cofre1 = 0, cofre2 = 0, cont = 1;

    while (scanf("%d", &num) != EOF)
    {
        if (num == 0) return 0;

        int aux = 0;
        printf("Teste %i\n", cont);
        for (int i = 0; i < num; i++)
        {
            scanf("%d%i", &cofre1, &cofre2);
            int operacao = cofre1-(cofre2-aux);

            printf("%i\n", operacao);
            aux = cofre1-(cofre2-aux);
        }
        printf("\n");
        cont++;
    }
    
}
