//C Mais ou Menos?
#include <bits/stdc++.h>
using namespace std;

// Calcula a quantidade de vitamina C consumida por uma pessoa em um dia;
void calculadorC(int num){
    // Frutas e quantidade de vitamina C que cada uma possui;
    map<string, int> vitaminaC{
        {"suco de laranja",120}, {"morango fresco",85},
        {"mamao",85}, {"goiaba vermelha",70}, {"manga",56},
        {"laranja",50}, {"brocolis",34}
    };
    
    int consumo{}; // Quanto a pessoa consumiu de vitamina C no dia;
    for (size_t i {}; i < num; i++){
        int quant{}; // quantas frutas/legumes de determinado tipo esta pessoa consumiu;
        string tipofruta; // Tipo;
        cin >> quant;
        cin.ignore();
        getline(cin,tipofruta);
        for (auto it : vitaminaC){
            if (tipofruta == it.first){
                consumo += (quant*it.second);
                break;
            }
        }
    }
    if (consumo > 130) cout << "Menos " << (consumo-130) << " mg\n";
    else if (consumo < 110) cout << "Mais " << (110-consumo) << " mg\n";
    else cout << consumo << " mg\n";
}

// Função principal;
int main() {
    int num{}; // Casos de teste;
    while (cin >> num){
        if (num == 0) return 0;
        calculadorC(num);
    }
}
