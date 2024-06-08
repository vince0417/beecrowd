//Nome no Formulário
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cont {};;
    string frase;
    getline(cin, frase);

    for (int i {}; i < frase.size(); i++)
    {
        cont++;
    }
    
    if (cont <= 80) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}
