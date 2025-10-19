//Notação Científica
#include <bits/stdc++.h>
using namespace std;

int main() {
    string num{};
    cin >> num;
    stringstream temp;
    double numero = stod(num);
    temp << scientific << setprecision(4) << numero;
    num = temp.str();
    size_t posicaoE = num.find('e');
    num.at(posicaoE) = toupper(num.at(posicaoE));
    if (num.at(0) != '-') cout << "+" << num << "\n";
    else cout << num << "\n";
    return 0;
}

/*
    Neste problema usei stringstream para manipular numero e converte-lo 
    para notação científica.
    Declarei posicaoE para receber a posição que a letra 'e' encontra-se, uma vez que,
    na saída a mesma precisa estar em maiúscula. A partir da posição usamos toupper
    para converter.
*/