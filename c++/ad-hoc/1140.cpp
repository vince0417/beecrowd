//Flores Florescem da França
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string trecho;

    while (getline(cin, trecho))
    {
        if (trecho == "*") return 0;

        transform(trecho.begin(), trecho.end(), trecho.begin(), [](unsigned char c){ return tolower(c);});
        stringstream aux(trecho);
        string palavra;
        vector<string> palavras;
        while (aux >> palavra)
        {
            palavras.push_back(palavra);
        }
        
        char c{palavras.at(0).at(0)};
        int cont{1};
        if (palavras.size() >= 2){
            for (int i = 1; i < palavras.size(); i++)
            {
                if (palavras.at(i).at(0) == c) cont++;
            }
        }
        if (cont == palavras.size()) cout << "Y\n";
        else cout << "N\n";
    }

}

/*
    Usei transform para converter todos os caracteres da string trecho em minúsculo;
    Usei stringstream para separar as palavras, delimitadas por espaços;
    Adicionamos todas as palavras no vector palavras;
*/