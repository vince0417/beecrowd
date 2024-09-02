//LED
#include <stdio.h>
#include <string.h>

int v[] = {6,2,5,5,4,5,6,3,7,6};

int q_leds(char number[1000]) {
    int soma = 0;
    for (int i = 0; number[i] != '\0'; i++)
    {
        int index = number[i] - '0';
        soma += v[index];
    }
    return soma;
}

int main() {
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        char number[1000];
        scanf("%s", number);
        int soma = q_leds(number);
        printf("%i leds\n", soma);
    }
    
    return 0;
}
