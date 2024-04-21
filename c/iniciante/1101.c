//Sequência de Números e Soma
#include <stdio.h>

int main() {
    int n1, n2;

    while (1)
    {
        int soma = 0;
        scanf("%d %d", &n1, &n2);

        if (n1 <= 0 || n2 <= 0)
        {
            break;
        }
        else if (n1 > n2)
        {
            int aux = n1;
            n1 = n2;
            n2 = aux;
        }
    
        for (int i = n1; i <= n2; i++)
        {
            printf("%d ", i);
            soma += i;
        }
        
        printf("Sum=%d\n", soma);
    }

    return 0;
}
