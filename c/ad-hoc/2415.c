//Consecutivos
#include <stdio.h>

int main() 
{
    int num;
    scanf("%d", &num);
    int consecutivos = 0, aux = 0, cont = 0, anterior;

    while (cont < num)
    {
        int entrada;
        scanf("%d", &entrada);
        if (entrada == anterior) aux++;
        else{
            aux = 1; anterior = entrada;
        }
        if (aux > consecutivos) consecutivos = aux; cont++;
    }

    printf("%d\n", consecutivos);
    return 0;
}
