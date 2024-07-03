//Handebol
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int players, games;
    cin >> players >> games;

    int total {}, aux {};
    for (int i = 0; i < players; i++)
    {
        for (int x = 0; x < games; x++)
        {
            int player {};
            cin >> player;
            if (player > 0) aux++;
        }
        
        if (aux == games) total++;
        aux = 0;
    }
    
    cout << total << endl;
    return 0;
}
