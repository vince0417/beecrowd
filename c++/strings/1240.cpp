//Encaixa ou Não I
#include <bits/stdc++.h>
using namespace std;

bool encaixa (const string& numeroUm, const string& numeroDois)
{
    return numeroUm.find(numeroDois) < numeroDois.size(); // Verifica se numeroDois está em numeroUm;
}

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int casos{}; // Casos de teste;
    cin >> casos;

    string numeroUm{}, numeroDois{};
    for (int i {}; i < casos; i++)
    {
        cin >> numeroUm >> numeroDois;
        
        // Inverte inicio e fim das strings para facilitar a consulta e evitar verificar numeroUm por completo;
        reverse(numeroUm.begin(), numeroUm.end());
        reverse(numeroDois.begin(), numeroDois.end());


        if (encaixa(numeroUm, numeroDois)) cout << "encaixa\n";
        else cout << "nao encaixa\n";
    }
    
    return 0;
}
