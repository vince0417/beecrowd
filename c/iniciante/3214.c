//Refrigerante
#include <stdio.h>

int main(){
    int jaTem = 0, encontradas = 0, refri = 0; // Garrafas vazias que ja tenho, encontradas e quantas vazias preciso para um novo refri;
    scanf("%d%d%d", &jaTem, &encontradas, &refri);

    int total = (jaTem+encontradas), consumido = 0; // Total de garrafas e quantos refri irei consumir no dia;
    while(total >= refri){
        total -= refri; 
        total++; // Garrafa do refri que consumi;
        consumido++;
    }
    printf("%i\n", consumido);
    return 0;
}
