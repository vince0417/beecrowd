//Trigo no Tabuleiro
#include <bits/stdc++.h>
using namespace std;

int main() {
    int testes;
    cin >> testes;

    for (int i = 0; i < testes; i++)
    {
        int num;
        cin >> num;

        unsigned long long total {0};
        long aux {1};
        for (int i = 0; i < num; i++)
        {
            total += aux;
            aux *= 2;
        }
        total /= 12;
        cout << total/1000 << " kg\n";
    }
    
    return 0;
}
