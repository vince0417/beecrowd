//Preenchimento de Vetor II
#include <stdio.h>

int main () {
    int  cont = 0, num, n[1000];
    scanf("%d", &num);

    for (int i = 0; i < 1000; i++)
    {
        printf("N[%i] = %d\n", i, cont);
        if (cont + 1 == num)
        {
            cont = 0;
            continue;
        }
        cont++;
    }
    
    return 0;
}
