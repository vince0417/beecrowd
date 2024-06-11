//A Saída
#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    scanf("%i", &num);

    for (int i = 0; i < num+1; i++)
    {
        char pergunta;
        scanf("%[^\n]", pergunta);
    }
    for (int i = 0; i < num; i++) printf("gzuz\n");

    return 0;
}
