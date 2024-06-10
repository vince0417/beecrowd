//Turistas no Parque Huacachina
#include <stdio.h>
#include <string.h>

int main() {
    int turistas = 0, veiculos = 0;
    
    while (1)
    {
        char passeio[20];
        int pessoas;
        scanf("%s", passeio);

        if (strcmp(passeio, "ABEND") == 0)
        {
            break;
        }
        scanf("%i", &pessoas);
        if (strcmp(passeio, "SALIDA") == 0)
        {
            veiculos += 1;
            turistas += pessoas;
        }
        else if (strcmp(passeio, "VUELTA") == 0)
        {
            veiculos -= 1;
            turistas -= pessoas;
        }

    }
    
    printf("%i\n", turistas);
    printf("%i\n", veiculos);
    return 0;
}
