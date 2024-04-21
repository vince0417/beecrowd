//Coordenadas de um Ponto
#include <bits/stdc++.h>
using namespace std;

int main() {
    float x, y;
    cin >> x >> y;

    if (x > 0 and y > 0)
    {
        cout << "Q1\n";
    }
    else if (x < 0 and y > 0)
    {
        cout << "Q2\n";
    }
    else if (x < 0 and y < 0)
    {
        cout << "Q3\n";
    }
    else if (x > 0 and y < 0)
    {
        cout << "Q4\n";
    }
    else if (x != 0 and y == 0 or x == 0 and y != 0)
    {
        if (x != 0 and y == 0)
        {
            cout << "Eixo X\n";
        }
        else if (x == 0 and y != 0)
        {
            cout << "Eixo Y\n";
        }
         
    }
    else
        cout << "Origem\n";

    return 0;
}
