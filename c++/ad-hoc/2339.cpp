//Aviões de Papel
#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int alunos {}, papel {}, quant {};
    cin >> alunos >> papel >> quant;

    if ((papel/alunos) >= quant) cout << "S\n";
    else cout << "N\n";

    return 0;
}
