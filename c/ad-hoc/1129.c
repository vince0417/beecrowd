//Leitura Ótica
#include <stdio.h>

int main()
{
    int num = 0; // Casos de teste;
    char alternativas[6] = {'A','B','C','D','E','F'};
    while (scanf("%i", &num) != EOF)
    {
        if (num == 0) return 0;
        for (int i = 0; i < num; i++){
            char saida = 0; // Guarda a alternativa correta;
            int aux = 255, cont = 0;
            for (int x = 0; x < 5; x++)
            {
                int cor = 0; // Tonalidade da cor de determinada alternativa;
                scanf("%d", &cor);
                if (cor <= 127) cont++;
                if (cor < aux){
                    saida = alternativas[x];
                    aux = cor;
                }
            }
            if (cont > 1 || cont < 1) printf("*\n");
            else printf("%c\n", saida);
        }
    }
}
