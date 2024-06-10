//Identificando o Chá
#include <stdio.h>

int main() {
    int cha, acertos = 0;
    scanf("%d", &cha);

    for (int i = 0; i < 5; i++)
    {
        int pessoa;
        scanf("%i", &pessoa);

        if (pessoa == cha) acertos += 1;

    }
    
    printf("%d\n", acertos);
    return 0;
}
