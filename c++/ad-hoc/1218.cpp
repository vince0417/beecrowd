//Getline Three - Calçados
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string caixaCalcados{}; // Guarda todos os calçados de forma desorganizada;

    int par{}; // Par de calçados que Overlaine quer encontrar;
    int cont{1}; // Conta os casos;
    while (cin >> par)
    {
        int paresIguais{}, feminino{}, masculino{};

        cin.ignore();
        getline(cin, caixaCalcados);
        for (int i {1}; i < caixaCalcados.size(); i++)
        {
            string aux = to_string(par); // Converte a variável par(int) para string;
            string str{caixaCalcados.at(i-1)}; // Cria a string str para receber os caracteres;
            str.push_back(caixaCalcados.at(i));
            if (str == aux)
            {
                paresIguais++;
                if (caixaCalcados.at(i+2) == 'M') masculino++;
                else if (caixaCalcados.at(i+2) == 'F') feminino++;
            }

        }
        if (cont >= 2) cout << "\n";
        cout << "Caso " << cont << ":\n";
        cout << "Pares Iguais: " << paresIguais << "\n";
        cout << "F: " << feminino << "\nM: " << masculino << "\n";
        cont++;
    }

    return 0;
}
