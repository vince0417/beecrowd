//Death Knight Hero
#include <stdio.h>
#include <string.h>

int main()
{
    int num, cont = 0;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {     
        char habi[1000];
        scanf("%s", habi);

        for (int id = 0; habi[id] != '\0'; id++)
        {
            if (habi[id] == 'C' && habi[id+1] == 'D') 
            {
                cont++; 
                break;
            }
        }
    }
    
    printf("%d\n", num-cont);
    return 0;
}
