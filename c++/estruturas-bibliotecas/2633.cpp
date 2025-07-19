//Churras no Yuri
#include <bits/stdc++.h>
using namespace std;


int main()
{
    map<int, string> carnes; //Recebe um número como chave e um tipo de carne como valor;
    int casosT{}; //Casos de teste;

    while (cin >> casosT){
        for (size_t i = 0; i < casosT; i++)
        {
            string tipo{};
            int vencimento{};
            cin >> tipo >> vencimento;
            carnes.insert({vencimento, tipo}); //Insere vencimento como chave e tipo como valor à carnes.
        }
        auto it{carnes.begin()}; //Declara e inicializa it recebendo a primeira chave de carnes;
        for (; it != carnes.end(); it++){
            cout << it->second; //Mostra na saída o valor associado à chave;
            if (next(it) != carnes.end()) cout << " "; //Verifica se o próximo elemento é o último;
        }
        cout << "\n";
        carnes.clear(); //Limpa carnes para ser reutilizado;
    }

    return 0;
}
