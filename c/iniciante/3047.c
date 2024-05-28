//A idade de Dona Mônica
#include <stdio.h>

int main()
{
    int idade[3];

    for (int i = 0; i < 3; i++) scanf("%d", &idade[i]);

    int maisVelho = (idade[0]) - (idade[1]+idade[2]);

    if (idade[1] < idade[2])
    {
        int aux = idade[1];
        idade[1] = idade[2];
        idade[2] = aux;
    }
    
    if (maisVelho >= idade[1]) printf("%d\n", maisVelho);
    else if (idade[1] > maisVelho) printf("%d\n", idade[1]);
    else printf("%d\n", idade[2]);;

    return 0;
}
