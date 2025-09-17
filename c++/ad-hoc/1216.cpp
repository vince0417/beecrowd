//Getline One
#include <bits/stdc++.h>
using namespace std;

void calculo(double& total, string& amigo);

int main() {
    double total{};
    string amigo;
    calculo(total,amigo);
    return 0;
}

void calculo(double& total, string& amigo) {
    int metros{}, amigos{};
    while (getline(cin,amigo))
    {
        cin >> metros;
        total += metros;
        ++amigos;
        cin.ignore();
    }
    long double media = (total/amigos);
    cout.precision(1);
    cout.setf(ios::fixed);
    cout << media << "\n";
}

/*
    O problema é simples, adicionamos cada distância entre a casa de Mangojata e de seu amigo,
    em seguida dividimos o total pelo número de amigos, usando double para ser mais preciso.
    Não podemos esquecer do cin.ignore() em cada iteração do loop; 
*/