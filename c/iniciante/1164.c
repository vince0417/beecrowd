//Número Perfeito
#include <stdio.h>

int main() {
    int num;
    scanf("%i", &num);

    for (int i = 0; i < num; i++)
    {
       int n, soma = 0;
       scanf("%i", &n);

       for (int cont = 1; cont < n; cont++)
       {
            if (n%cont == 0)
            {
                soma += cont;
            }
            
       }
       if (soma == n) printf("%i eh perfeito\n", n);
       else printf("%i nao eh perfeito\n", n);
         
    }
    
    return 0;
}
