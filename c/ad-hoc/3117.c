//Atrasadinhos
#include <stdio.h>

int main()
{
    int alunos, necessarias, qtd = 0;
    scanf("%i%d", &alunos, &necessarias);
    for (size_t i = 0; i < alunos; ++i)
    {
        int horario;
        scanf("%i", &horario);
        if (horario <= 0) qtd++;
    }
    if (qtd >= necessarias) printf("YES\n");
    else printf("NO\n");
    return 0;
}
