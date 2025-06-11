//Copiando e Colando Código
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string linha{}, body{};

    int inicioBody{}, fimBody{}, cont{};
    do 
    {
        getline(cin, linha);
        if (linha == "    </body>") fimBody = cont;
        if (inicioBody > 0 and fimBody == 0)
        {
            body += linha + "\n";
        } 
        if (linha == "    <body>") inicioBody = cont;
        cont++;
    } while (linha != "</html>");
    
    cout << body;
    return 0;
}

