//Picos e Vales
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool paisagem(int num); //Protótipo;

int main() {
    int num;
    scanf("%d", &num);

    printf("%d\n", paisagem(num)); //Exibimos no console o retorno da função paisagem convertido para int;
    return 0;
}

bool paisagem(int num) {
    int medidas[num]; //Guarda as medidas da paisagem;
    for (size_t i = 0; i < num; ++i)
    {
        scanf("%d", &medidas[i]);
    }
    char pico[5] = "pico", vale[5] = "vale", temp[15];
    for (size_t i = 1; i < num; ++i)
    {
        if (medidas[i] > medidas[i-1] && strcmp(temp,pico) != 0) strcpy(temp,pico); //strcpy copia tudo da string pico para temp;
        else if (medidas[i] < medidas[i-1] && strcmp(temp,vale) != 0) strcpy(temp,vale); //strcmp é usado para comparar strings;
        else {
            return false;
        }   
    }
    return true;
}

/*
Dadas as medidas de uma paisagem devemos retornar verdadeiro/falso se segue:
Uma medida é considerada um pico se é maior que a medida anterior;
Uma medida é considerada um vale se é menor que a medida anterior.
*/