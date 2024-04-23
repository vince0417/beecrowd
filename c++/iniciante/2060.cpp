//Desafio de Bino
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    int two {0}, three {0}, four {0}, five {0};
    for (int i = 0; i < num; i++)
    {
        int x;
        cin >> x;
        if (x%2 == 0) two++;
        if (x%3 == 0) three++;
        if (x%4 == 0) four++;
        if (x%5 == 0) five++;
    }
    
    cout << two << " Multiplo(s) de 2\n";
    cout << three << " Multiplo(s) de 3\n";
    cout << four << " Multiplo(s) de 4\n";
    cout << five << " Multiplo(s) de 5\n";
    return 0;
}
