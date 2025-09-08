//Vamos Fechar
#include <stdio.h>

int main()
{
    int valorTotal, gastoDiario;
    scanf("%d%d", &valorTotal, &gastoDiario);

    int dias = (valorTotal/gastoDiario);

    if (dias <= 9){
        dias += 21;

        printf("A UFSC fecha dia %d de setembro.\n", dias);
    }else{
        dias -= 9;
        printf("A UFSC fecha dia %d de outubro.\n", dias);
    }
    return 0;
}
