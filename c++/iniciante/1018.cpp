//Cédulas
#include <bits/stdc++.h>
using namespace std;

void notasQt(int &num, vector<int> &notas); // Protótipo;

int main(){
    int num;
    cin >> num;
    cout << num << '\n';

    vector<int> notas(7,0); // Sete elementos, todos inicializados com zero. Guarda a quantidade de cada nota;
    notasQt(num, notas);

    for(int i{}; i < 7; i++){
        int temp[7] = {100, 50, 20, 10, 5, 2, 1};
        cout << notas.at(i) << " nota(s) de R$ " << temp[i] << ",00\n";
    }
    return 0;
}

void notasQt(int &num, vector<int> &notas){
    if(num == 0) return; // Caso base;
    if(num >= 100){
        num -= 100;
        notas[0]++;
    }
    else if(num >= 50){
        num -= 50;
        notas[1]++;
    }
    else if(num >= 20){
        num -= 20;
        notas[2]++;
    }
    else if(num >= 10){
        num -= 10;
        notas[3]++;
    }
    else if(num >= 5){
        num -= 5;
        notas[4]++;
    }
    else if(num >= 2){
        num -= 2;
        notas[5]++;
    }
    else{
        num -= 1;
        notas[6]++;
    }

    notasQt(num, notas);
}
