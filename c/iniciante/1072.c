//Intervalo 2
#include <stdio.h>

int main () {
    int quant, fora = 0, dentro = 0;

    scanf("%d", &quant);
    for (int i = 0; i < quant; i++)
    {
        int num;
        scanf("%d", &num);
        if (num >= 10 && num <= 20)
        {
            dentro++;
        }
        else
            fora++;
        
    }
    
    printf("%d in\n", dentro);
    printf("%d out\n", fora);
    return 0;
}
