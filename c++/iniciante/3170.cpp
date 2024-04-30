//Bolinhas de Natal
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int bolas, galhos;
    cin >> bolas >> galhos;

    if (2*bolas >= galhos or 2*bolas == galhos-1) cout << "Amelia tem todas bolinhas!\n";
    else printf("Faltam %d bolinha(s)\n", (galhos-(2*bolas))/2);
    return 0;
}
