//Qual o Mais Rápido?
#include <bits/stdc++.h>
using namespace std;

int main()
{
    float n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    if (n1 == n2 or n1 == n3 or n2 == n3) cout << "Empate\n";
    else if (n1 < n2 and n1 < n3) cout << "Otavio\n";
    else if (n2 < n1 and n2 < n3) cout << "Bruno\n";
    else cout << "Ian\n";
    return 0;
}
