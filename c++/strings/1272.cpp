//Mensagem Oculta
#include <bits/stdc++.h>
using namespace std;

// Esta função passa por uma frase pegando a primeira letra de cada palavra e colocando na ultimo indice de outra string;
void palavraOculta(string &frase, string &palavra)
{
    int aux {};
    if (frase[0] != ' ') palavra.push_back(frase[0]);
    for (int i = 1; i < frase.size(); i++)
    {
        if (frase.at(i-1) == ' ' and frase.at(i) != ' ')
        {
            palavra.push_back(frase.at(i));
            aux++;
        }
    }
    
    if (aux == 0) cout << frase[0] << '\n';
    else cout << palavra << '\n';
}

int main ()
{
    int num;
    string frase {};
    cin >> num;
    cin.ignore(); // limpa o caracter de nova linha \n do buffer de entrada std::cin.
    for (int i {}; i < num; i++)
    {
        string palavra {};
        getline(cin, frase);
        palavraOculta(frase,palavra);
    }
    
    return 0;
}
