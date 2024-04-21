//Idade em Dias
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cin >> num;

    int ano = 0, mes = 0, dia = 0;
    for (int i = 0; i < num; i++)
    {
        dia++;
        if (dia == 30)
        {
            mes += 1;
            dia = 0;
        }
        if (mes == 12)
        {
            i += 5;
            ano += 1;
            mes = 0;
        }
            
    }
    
    cout << ano << " ano(s)\n" << mes << " mes(es)\n" << dia << " dia(s)\n";
    return 0;
}
