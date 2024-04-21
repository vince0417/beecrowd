//Média 3
#include <stdio.h>

int main()
{

    float n[4], x, y, a;
    scanf("%f %f %f %f", &n[0], &n[1], &n[2], &n[3]);
    x = (n[0] * 2 + n[1] * 3 + n[2] * 4 + n[3] * 1) / (2 + 3 + 4 + 1);
    if (x >= 5.0 && x < 7.0)
    {
        scanf("%f", &y);
    }

    printf("Media: %.1f\n", x);
    if (x >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (x < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else if (x >= 5.0 && x < 7.0)
    {
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1f\n", y);
        a = (x + y) / 2;
        if (a >= 5)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", a);
        }
        else if (a <= 4.9)
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", a);
        }
    }

    return 0;
}
