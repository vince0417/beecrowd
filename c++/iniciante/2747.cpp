//Saída 1
#include <bits/stdc++.h>
using namespace std;

int main() {
    char caixa[7][39];

    for (int l = 0; l < 7; l++)
    {
        for (int c = 0; c < 39; c++)
        {
            if (l == 0 or l == 7-1)
            {
                caixa[l][c] = '-';
                cout << caixa[l][c];
            }
            else if (c == 0 or c == 39-1)
            {
                caixa[l][c] = '|';
                cout << caixa[l][c];
            }
            else{
                caixa[l][c] = ' ';
                cout << caixa[l][c];
            }
            
        }
        cout << endl;
    }

    return 0;
}
