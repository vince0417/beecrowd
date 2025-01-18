//Volta
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int piloto1{}, piloto2{};
    cin >> piloto1 >> piloto2;

    int diferença = (piloto2-piloto1), aux{}, volta{};
    while (aux < piloto2)
    {
        volta++;
        aux += diferença;
    }
    
    cout << volta << '\n';
    return 0;
}
