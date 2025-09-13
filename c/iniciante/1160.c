//Crescimento Populacional
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    for (size_t i = 0; i < num; ++i)
    {
        int pA, pB; //População da cidade A e B;
        float cpA, cpB; //Crescimento populacional anual de cada cidade;
        scanf("%i%i%f%f", &pA, &pB, &cpA, &cpB);

        int anos = 0;
        do
        {
            pA += (pA*cpA)/100;
            pB += (pB*cpB)/100;
            ++anos;
            if (anos > 100) break;
        } while (pA <= pB);
        
        if (anos > 100) printf("Mais de 1 seculo.\n");
        else printf("%d anos.\n", anos);
    }
    return 0;
}
