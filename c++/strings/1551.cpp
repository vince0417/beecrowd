//Frase Completa
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int casos{};
    string frase{};

    vector<char> alfabeto{'a','b','c','d','e','f','g','h','i','j','k',
    'l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin >> casos;
    cin.ignore();
    for (int i {}; i < casos; ++i)
    {
        int totalLetras{}; // Conta quantas letras do alfabeto temos na frase(repetições não entram na soma);
        getline(cin, frase);

        for (int letra {}; letra < alfabeto.size(); letra++) // Percorre o alfabeto;
        {
            for (int aux {}; aux < frase.size(); aux++) // Percorre a frase;
            {
                if (alfabeto.at(letra) == frase.at(aux))
                {
                    totalLetras++;
                    break;
                }
            }
            
        }
        
        if (totalLetras == 26) cout << "frase completa\n";
        else if (totalLetras < 26 and totalLetras >= 13) cout << "frase quase completa\n";
        else if (totalLetras < 13) cout << "frase mal elaborada\n";
    }
    
    return 0;
}
