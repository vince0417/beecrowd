//Qual o Mais Rápido?
#include <stdio.h>

int main()
{
    float n1, n2, n3;
    scanf("%f%f%f", &n1,&n2,&n3);

    if (n1 == n2 || n1 == n3 || n2 == n3) printf("Empate\n");
    else if (n1 < n2 && n1 < n3) printf("Otavio\n");
    else if (n2 < n1 && n2 < n3) printf("Bruno\n");
    else printf("Ian\n");
    return 0;
}
