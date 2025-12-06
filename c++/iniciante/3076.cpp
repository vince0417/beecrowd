//Exercício de História
#include <bits/stdc++.h>
using namespace std;

int main() {
    long ano{};
    while(cin >> ano){
        double temp = (double)ano/100;
        long long seculo = static_cast<int>(ceil(temp));
        cout << seculo << '\n';
    }
    return 0;
}

/*
    A solução deste problema é simples, precisamos apenas dividir o ano por 100, ou seja, a quantidade
    de anos que tem um seculo, depois arredodamos o resultado para o próximo inteiro.
*/