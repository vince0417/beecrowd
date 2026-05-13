//Notas e Moedas
#include <bits/stdc++.h>
using namespace std;

void notasQt(int &num, vector<int> &notas, vector<int> &moedas); // Protótipo;

int main(){
    double aux;
    cin >> aux;
    int num = (int)(100*aux);

    vector<int> notas(6,0); // Sete elementos, todos inicializados com zero. Guarda a quantidade de cada nota;
    vector<int> moedas(6,0); // Sete elementos, todos inicializados com zero. Guarda a quantidade de cada moeda;
    notasQt(num, notas, moedas);

    cout << "NOTAS:\n";
    for(int i{}; i < 6; i++){
        int temp[6] = {100, 50, 20, 10, 5, 2};
        cout << notas.at(i) << " nota(s) de R$ " << temp[i] << ".00\n";
    }
    cout << "MOEDAS:\n";
    cout.precision(2);
    cout.setf(ios::fixed);
    for(int i{}; i < 6; i++){
        float temp[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
        cout << moedas.at(i) << " moeda(s) de R$ " << temp[i] << '\n';
    }

    return 0;
}

void notasQt(int &num, vector<int> &notas, vector<int> &moedas){
    if(num == 0) return; // Caso base;
    if(num >= 10000){
        num -= 10000;
        notas[0]++;
    }
    else if(num >= 5000){
        num -= 5000;
        notas[1]++;
    }
    else if(num >= 2000){
        num -= 2000;
        notas[2]++;
    }
    else if(num >= 1000){
        num -= 1000;
        notas[3]++;
    }
    else if(num >= 500){
        num -= 500;
        notas[4]++;
    }
    else if(num >= 200){
        num -= 200;
        notas[5]++;
    }
    else if(num >= 100){
        num -= 100;
        moedas[0]++;
    }
    else if(num >= 50){
        num -= 50;
        moedas[1]++;
    }
    else if(num >= 25){
        num -= 25;
        moedas[2]++;
    }
    else if(num >= 10){
        num -= 10;
        moedas[3]++;
    }
    else if(num >= 5){
        num -= 5;
        moedas[4]++;
    }
    else{
        moedas[5] = num;
        num = 0;
    }

    notasQt(num, notas, moedas);
}
