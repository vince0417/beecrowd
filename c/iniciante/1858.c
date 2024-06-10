//A Resposta de Theon
#include <stdio.h>

int main()
{
    int num, pessoa = 0, menor = 0;
    scanf("%i", &num);

    for (int i = 1; i <= num; i++)
    {
        int n, aux = 0;
        scanf("%d", &n);
        aux += n;
        if (i == 1)
        {
            menor = aux;
            pessoa = i;
        }
        else if (aux < menor)
        {
            menor = aux;
            pessoa = i;
        }
        
        
    }
      
    printf("%i\n", pessoa);
    return 0;
}
