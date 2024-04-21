//O Bravo Guerreiro Hashmat
#include <stdio.h>

int main() {
    long long hashmat, inimigo;
    while (scanf("%llu %llu", &hashmat, &inimigo) != EOF)
    {
        if (inimigo > hashmat)
        {
            printf("%llu\n", inimigo-hashmat);
        }
        else
            printf("%llu\n", hashmat-inimigo);
    }

    return 0;
}
