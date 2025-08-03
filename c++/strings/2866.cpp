//Criptotexto
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int casosT{}; // Casos de teste;
    cin >> casosT;
    for (int i {}; i < casosT; i++)
    {
        string msg{}; // Texto criptografado;
        cin >> msg;
        
        // Para descriptografar a mensagem, precisamos pegar as letras minúsculas de trás pra frente;
        for (int x = msg.size()-1; x >= 0; x--)
        {
            if (msg.at(x) == tolower(msg.at(x)))
                cout << msg.at(x);
        }
        cout << "\n";
    }
    return 0;
}
