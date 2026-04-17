//Bilhete codificado
#include <iostream>

int main(){
    int num{};
    std::cin >> num;
    char letra = '`'+num;// Suponha que num é 10, o caractere '`' + 10 é 'j' na tabela ASCII;
    std::cout << letra << '\n';
    return 0;
}

/*
    Usei Aritmética de caracteres para resolver este problema.
    Como num será a posição de determinada letra do alfabeto e, sabemos que a letra é minúscula,
    fazendo uso da tabela ASCII podemos descobrir a letra sem criar um array contendo as letras do alfabeto.
    'a' tem como valor ASCII 97, por isso pegamos o caractere '`', que antecede 'a', como base. 
*/