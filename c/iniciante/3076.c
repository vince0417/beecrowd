//Exercício de História
#include <stdio.h>
#include <math.h>

int main() {
    long ano = 0;
    while(scanf("%ld", &ano) != EOF){
        double temp = (double)ano/100;
        long long seculo = (int)ceil(temp);
        printf("%lld\n", seculo);
    }
    return 0;
}

/*
    A solução deste problema é simples, precisamos apenas dividir o ano por 100, ou seja, a quantidade
    de anos que tem um seculo, depois arredodamos o resultado para o próximo inteiro.
*/