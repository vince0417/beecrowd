//Cifra de César
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int casos{}; // Casos de teste;
    cin >> casos;

    for (int i {}; i < casos; i++)
    {
        int num{};
        string str{}, saida{};
        cin >> str >> num;

        for (int x {}; x < str.size(); x++)
        {
            if (str.at(x)-num < 65)
            {
                char aux = 91 - (65 - (str.at(x)-num));
                saida.push_back(aux);
            }
            else saida.push_back(str.at(x)-num);
        }
        cout << saida << "\n";
    }
    
    return 0;
}

/*
Esta solução está relacionada diretamente com a tabela ASCII, específicamente 
com o alfabeto de letras maiúsculas localizado do número 65 ao 90.
*/