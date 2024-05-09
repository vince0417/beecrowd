//Alarme Despertador
#include <stdio.h>

int main()
{
    int horas[4];
    while (scanf("%d%d%d%d", &horas[0],&horas[1],&horas[2],&horas[3]))
    {
        if (horas[0] == 0 && horas[1] == 0 &&
            horas[2] == 0 && horas[3] == 0) return 0;

        int cont = 0;
        while (1)
        {
            if (horas[0] == horas[2] && horas[1] == horas[3]) break;
            horas[1]++;
            if (horas[1] == 60) horas[0]++, horas[1] = 0;
            if (horas[0] == 24) horas[0] = 0;
            cont++;
        }
        printf("%d\n", cont);
    }

}
