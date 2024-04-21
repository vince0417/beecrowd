//Lanche
#include <stdio.h>

int main()
{

    int codigo, quantidade;
    float preco[] = {4.00, 4.50, 5.00, 2.00, 1.50}, x;

    scanf("%d %d", &codigo, &quantidade);

    if (codigo == 1)
    {
        x = quantidade * preco[0];
        printf("Total: R$ %.2f\n", x);
    }
    else if (codigo == 2)
    {
        x = quantidade * preco[1];
        printf("Total: R$ %.2f\n", x);
    }
    else if (codigo == 3)
    {
        x = quantidade * preco[2];
        printf("Total: R$ %.2f\n", x);
    }
    else if (codigo == 4)
    {
        x = quantidade * preco[3];
        printf("Total: R$ %.2f\n", x);
    }
    else if (codigo == 5)
    {
        x = quantidade * preco[4];
        printf("Total: R$ %.2f\n", x);
    }

    return 0;
}
