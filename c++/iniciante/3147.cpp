//A Batalha dos Cinco Exércitos
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ex[6];
    for (int i = 0; i < 6; i++) cin >> ex[i];

    int bem = (ex[0]+ex[1]+ex[2]+ex[5]);
    int mal = (ex[3]+ex[4]);

    if (bem >= mal) cout << "Middle-earth is safe.\n";
    else cout << "Sauron has returned.\n";
    return 0;
}
