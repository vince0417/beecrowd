//Pula Sapo
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int alturaPulo{}, totalCanos{};
    cin >> alturaPulo >> totalCanos;

    vector<int> alturaCanos(totalCanos);
    cin >> alturaCanos[0];

    for (int i {1}; i < totalCanos; i++)
    {
        cin >> alturaCanos.at(i);
        if ((alturaCanos[i] - alturaCanos[i-1]) > alturaPulo || (alturaCanos[i-1] - alturaCanos[i]) > alturaPulo) 
        {
            cout << "GAME OVER\n";
            return 0;
        }
    }

    cout << "YOU WIN\n";
    return 0;
}
