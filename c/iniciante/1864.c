//Nossos Dias Nunca Voltarão
#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d", &num);

    char citacao[35] = {"LIFE IS NOT A PROBLEM TO BE SOLVED"};
    for (int i = 0; i < num; i++)
    {
        printf("%c", citacao[i]);
        if (i == (num-1)) printf("\n");
    }
    
    return 0;
}
