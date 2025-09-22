//Picos e Vales
#include <bits/stdc++.h>
using namespace std;

bool paisagem(vector<int>& medidas);

int main() {
    int num;
    cin >> num; //Total de medidas;

    vector<int> medidas; //Guarda as medidas da paisagem;
    for (size_t i {}; i < num; ++i)
    {
        int medida;
        cin >> medida;
        medidas.push_back(medida);
    }
    cout << paisagem(medidas) << "\n";
    return 0;
}


bool paisagem(vector<int>& medidas){
    string pico{"pico"}, vale{"vale"}, temp{};
    for (size_t i {1}; i < medidas.size(); ++i)
    {
        if (medidas.at(i) > medidas.at(i-1) && temp != pico) temp = pico;
        else if (medidas.at(i) < medidas.at(i-1) && temp != vale) temp = vale;
        else return false;
    }
    return true;
}

/*
Dadas as medidas de uma paisagem devemos retornar verdadeiro/falso se segue:
Uma medida é considerada um pico se é maior que a medida anterior.
Uma medida é considerada um vale se é menor que a medida anterior.
*/