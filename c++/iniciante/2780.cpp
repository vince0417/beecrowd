//Basquete de Robôs
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int robo{};
    cin >> robo;

    if (robo <= 800) cout << 1 << "\n";
    else if (robo > 800 and robo <= 1400) cout << 2 << "\n";
    else cout << 3 << "\n";

    return 0;
}
