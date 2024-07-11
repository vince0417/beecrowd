//A Greve para ou Continua?
#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    scanf("%i", &num);

    int dinheiro = 0, gastos = 0;
    for (int i = 0; i < num; i++)
    {
        int valores = 0;
        char letra[2];
        scanf("%s %i", &letra, &valores);

        if (strcmp(letra, "G") == 0) gastos += valores;
        else dinheiro += valores;
    }
    
    if ((dinheiro-gastos) > 0) printf("A greve vai parar.\n");
    else printf("NAO VAI TER CORTE, VAI TER LUTA!\n");
    return 0;
}
