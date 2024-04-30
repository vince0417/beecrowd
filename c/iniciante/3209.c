//Tomadas Elétricas
#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++)
    {
        int filtros, aux = 0;
        scanf("%d", &filtros);
        for (int i = 0; i < filtros; i++)
        {
            int tomadas;
            scanf("%d", &tomadas);
            aux += tomadas;
        }
        printf("%d\n", aux-(filtros-1));
    }
    
    return 0;
}
