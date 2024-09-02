//Sobrenome Não é Fácil
#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    scanf("%i", &num);
    
    char letras[10] = {'a','e','i','o','u','A','E','I','O','U'};
    for (int i = 0; i < num; i++)
    {
        char nome[42];
        scanf("%s", nome);

        int aux = 0, dificil = 0;
        for (int cont = 0; nome[cont] != '\0'; cont++)
        {
            for (int x = 0; x < 10; x++)
            {
                if (nome[cont] != letras[x]) aux++;
            }
            if (aux == 10)
            {
                dificil++;
                if (dificil == 3) break;
            }
            else dificil = 0;
            aux = 0;
        }
        if (dificil >= 3) printf("%s nao eh facil\n", nome);
        else printf("%s eh facil\n", nome);
    }
    return 0;
}
