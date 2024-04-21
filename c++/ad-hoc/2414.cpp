//Desafio do Maior Número
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, maior {0};
    
    while (cin >> num)
    {
        if (num == 0)
        {
            break;
        }
        else if (num > maior)
        {
            maior = num;
        }
        
    }
    
    cout << maior << endl;
    return 0;
}
