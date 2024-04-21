//Trigo no Tabuleiro
#include <stdio.h>

int main() {
    int testes;
    scanf("%d", &testes);

    for (int i = 0; i < testes; i++)
    {
        int num;
        scanf("%d", &num);

        unsigned long long total = 0;
        long long aux = 1;
        for (int i = 0; i < num; i++)
        {
            total += aux;
            aux *= 2;
        }
        total /= 12;
        printf("%llu kg\n", total/1000);
    }
    
    return 0;
}
