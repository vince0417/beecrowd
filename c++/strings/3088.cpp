//Correção de Texto
#include <bits/stdc++.h>
using namespace std;

int  main()
{
    string frase{};

    while (getline(cin, frase))
    {
        string saida{};
        for (int i {}; i < frase.size(); i++)
        {
            if (frase.at(i) == ' ' and frase.at(i+1) == '.' 
            or frase.at(i) == ' ' and frase.at(i+1) == ',') continue;
            else saida.push_back(frase.at(i));
        }
        cout << saida << "\n";
    }
    
    return 0;
}
