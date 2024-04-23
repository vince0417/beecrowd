//Vice-Campeão
#include <stdio.h>

int main()
{
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 > n2)
    {
        int aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if (n3 > n2) printf("%d\n", n2);
    else if (n3 > n1 && n3 < n2) printf("%d\n", n3);
    else if (n3 < n1) printf("%d\n", n1);
    return 0;
}
