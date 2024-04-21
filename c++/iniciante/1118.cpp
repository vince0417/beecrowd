//Várias Notas Com Validação
#include <bits/stdc++.h>
using namespace std;

float media(float n1, float n2){
    float soma = 0;
    cin >> n1;
    if (n1 < 0 or n1 > 10)
    {
        while (n1 < 0 or n1 > 10)
        {
            cout << "nota invalida\n";
            cin >> n1;
        }
        
    }
    cin >> n2;
    if (n2 < 0 or n2 > 10)
    {
        while (n2 < 0 or n2 > 10)
        {
            cout << "nota invalida\n";
            cin >> n2;
        }
        
    }
    
    soma = (n1+n2)/2;
    return soma;
    
}

int main() {
    float n1, n2, s;
    s = media(n1, n2);
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << "media = " << s << endl;


    int novo;
    cout << "novo calculo (1-sim 2-nao)\n";
    while (cin >> novo)
    {
        if (novo == 2)
        {
            return 0;
        }
        else if (novo == 1)
        {
            s = media(n1, n2);
            cout << "media = " << s << endl;
            cout << "novo calculo (1-sim 2-nao)\n";
        }
        else{
            cout << "novo calculo (1-sim 2-nao)\n";
        }
        
    }
  
}
