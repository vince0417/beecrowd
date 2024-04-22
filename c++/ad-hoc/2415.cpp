//Consecutivos
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int num;
    cin >> num;
    int consecutivos {0}, aux {0}, cont {0}, anterior;

    while (cont < num)
    {
        int entrada;
        cin >> entrada;
        if (entrada == anterior) aux++;
        else{
            aux = 1; anterior = entrada;
        }
        if (aux > consecutivos) consecutivos = aux; cont++;
    }

    cout << consecutivos << endl;
    return 0;
}
