//Soma Natural
#include <stdio.h>

int main()
{
    long long int inicio = 0, fim = 0;
    scanf("%lli %lli", &inicio, &fim);
    
    long long int aux = (fim-inicio);
    long long int aux1 = fim+inicio;
    unsigned long long int soma = ((aux+1)*aux1)/2;
    
    printf("%lld\n", soma);
    return 0;
}
