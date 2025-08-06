//Leitura Ótica
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num{}; // Casos de teste;
    vector<char> alternativas{'A','B','C','D','E','F'};
    while (cin >> num)
    {
        if (num == 0) return 0;
        for (int i {}; i < num; i++){
            char saida{}; // Guarda a alternativa correta;
            int aux{255}, cont{};
            for (int x {}; x < 5; x++)
            {
                int cor{}; // Tonalidade da cor de determinada alternativa;
                cin >> cor;
                if (cor <= 127) cont++;
                if (cor < aux){
                    saida = alternativas.at(x);
                    aux = cor;
                }
            }
            if (cont > 1 or cont < 1) cout << "*\n";
            else cout << saida << "\n";
        }
    }
}
