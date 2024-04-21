//Soma de Impares Consecutivos I
#include <stdio.h>
#include <stdlib.h>

int main() {

    int n1, n2, soma = 0;
    scanf("%d %d", &n1, &n2);

    if (n1>n2)
    {
        for (int i = (n1-1); i > n2; i--)
        {
            if (abs(i)%2 == 1)
            {
                soma = soma + i;
            }
            
        }
        
        printf("%d\n", soma);
    }
    else{

        for (int i = (n2-1); i > n1; i--)
        {
            if (abs(i)%2 == 1)
            {
                soma = soma + i;
            }
            
        }

        printf("%d\n", soma);
    }
    
    return 0;
}
