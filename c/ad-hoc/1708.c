//Volta
#include <stdio.h>

int main()
{
    int piloto1, piloto2;
    scanf("%i%i", &piloto1, &piloto2);

    int diferenca = (piloto2-piloto1), aux = 0, volta = 0;
    while (aux < piloto2)
    {
        volta++;
        aux += diferenca;
    }
    
    printf("%d\n", volta);
    return 0;
}
