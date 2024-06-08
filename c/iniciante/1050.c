//DDD
#include <stdio.h>
#include <string.h>

int main() {
    int num;
    int DDD[] = {61,71,11,21,32,19,27,31};
    char city[8][20] = {"Brasilia","Salvador","Sao Paulo",
    "Rio de Janeiro","Juiz de Fora","Campinas","Vitoria","Belo Horizonte"};

    scanf("%d", &num);
    for (int i = 0; i < 8; i++)
    {
        if (num == DDD[i])
        {
            printf("%s\n", city[i]);
            return 0;
        }
        
    }
    
    printf("DDD nao cadastrado\n");
    return 0;
}
