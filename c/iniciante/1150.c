//Ultrapassando Z
#include <stdio.h>

int main()
{
    int n1, n2, soma = 0, cont = 0;
    scanf("%i%i", &n1, &n2);

    if (n2 <= n1 || n2 == n1+1)
    {
        while (n2 <= n1 || n2 == n1+1) scanf("%i", &n2);
    }

    while (soma <= n2)
    {
        soma += n1;
        n1 += 1;
        cont += 1;
    }
    
    printf("%i\n", cont);
    return 0;
}
