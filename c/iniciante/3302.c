//Resposta Certa
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        int x;
        scanf("%d", &x);
        printf("resposta %d: %d\n", i, x);
    }

    return 0;
}
