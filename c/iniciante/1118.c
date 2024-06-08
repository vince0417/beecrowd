//Várias Notas Com Validação
#include <stdio.h>

float media(float n1, float n2){
    float soma = 0;
    scanf("%f", &n1);
    if (n1 < 0 || n1 > 10)
    {
        while (n1 < 0 || n1 > 10)
        {
            printf("nota invalida\n");
            scanf("%f", &n1);
        }
        
    }
    scanf("%f", &n2);
    if (n2 < 0 || n2 > 10)
    {
        while (n2 < 0 || n2 > 10)
        {
            printf("nota invalida\n");
            scanf("%f", &n2);
        }
        
    }
    
    soma = (n1+n2)/2;
    return soma;
    
}

int main() {
    float n1, n2, s;
    s = media(n1, n2);
    printf("media = %.2f\n", s);

    int novo;
    printf("novo calculo (1-sim 2-nao)\n");
    while (scanf("%d", &novo))
    {
        if (novo == 2)
        {
            return 0;
        }
        else if (novo == 1)
        {
            s = media(n1, n2);
            printf("media = %.2f\n", s);
            printf("novo calculo (1-sim 2-nao)\n");
        }
        else{
            printf("novo calculo (1-sim 2-nao)\n");
        }
        
    }
  
}
