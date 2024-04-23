//Cara ou Coroa
#include <stdio.h>

int main() {
    int num, maria = 0, joao = 0;
    
    while (1)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            return 0;
        }

        for (int i = 0; i < num; i++)
        {
            int vez;
            scanf("%d", &vez);

            if (vez == 0)
            {
                maria += 1;
            }
            else
                joao += 1;
        }
        printf("Mary won %d times and John won %d times\n", maria, joao);
        maria = 0;
        joao = 0;
    }
    
}
