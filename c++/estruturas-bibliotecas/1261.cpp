//Pontos de Feno
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int dicionario{}, descricoes{}; // Total de de palavras-chave do dicionário e descrições de cada cargo;

    while (cin >> dicionario >> descricoes)
    {
        unordered_map<string, int> pontosFeno; // Guardará as palavras-chaves e o valor de cada;
        for (int i = 0; i < dicionario; i++)
        {
            int valor{}; // Valor associado à palavra-chave;
            string palavra{}; // Palavra-chave;
            cin >> palavra >> valor;
            pontosFeno.insert({palavra,valor}); // Adiciona a palavra (chave) e valor (valor);
        }
        vector<string> texto; // Guarda a descrição;
        for (int i = 0; i < descricoes; i++) // Itera pelo número de cargos para pegarmos a descrição de cada;
        {
            string palavra{}; // Recebe cada palavra da descrição;
            cin >> palavra;
            texto.push_back(palavra); // Adicionamos as palavras na determinada sequencia à descrição;
            while (palavra != ".") // O fim de uma descrição é determinado por um '.';
            {
                cin >> palavra;
                texto.push_back(palavra);
            }
            int soma{}; // Recebe valor pago à cada cargo;
            for (int x = 0; x < texto.size(); x++) // Iteramos pelas palavras da descrição;
            {
                auto it{pontosFeno.begin()};
                for (; it != pontosFeno.end(); it++) // Iteramos pelas palavras-chaves e seus valores;
                {
                    if (it->first == texto.at(x)) soma += it->second; // Adicionamos o valor à soma se a palavra-chave for igual a palavra da descrição;
                }
            }
            cout << soma << "\n";
            texto.clear(); // Limpamos para usar novamente, se necessário;
        }
    }
    return 0;
}
