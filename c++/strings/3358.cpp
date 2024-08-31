//Sobrenome Não é Fácil
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    
    vector<char> letras {'a','e','i','o','u','A','E','I','O','U'};
    for (int i {}; i < num; i++)
    {
        string nome;
        cin >> nome;

        int aux {}, dificil {};
        for (int cont {}; cont < nome.size(); cont++)
        {
            for (int x = 0; x < letras.size(); x++)
            {
                if (nome.at(cont) != letras.at(x)) aux++;
            }
            if (aux == 10)
            {
                dificil++;
                if (dificil == 3) break;
            }
            else dificil = 0;
            aux = 0;
        }
        if (dificil >= 3) cout << nome << " nao eh facil\n";
        else cout << nome << " eh facil\n";
    }
    return 0;
}
