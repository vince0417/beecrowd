//Validação de Nota
#include <bits/stdc++.h>
using namespace std;

int main()
{

    float x, y, z;
    cin >> x >> y;

    cout.precision(2);
    cout.setf(ios::fixed);

    if (x < 0 or x > 10)
    {
        while (x < 0 or x > 10)
        {
            cout << "nota invalida\n";
            cin >> x;
        }

        if (x and y >= 0 and x and y <= 10)
        {
            z = (x + y) / 2;
            cout << "media = " << z << endl;
        }
    }
    else if (y < 0 or y > 10)
    {
        while (y < 0 or y > 10)
        {
            cout << "nota invalida\n";
            cin >> y;
        }

        if (x and y >= 0 and x and y <= 10)
        {
            z = (x + y) / 2;
            cout << "media = " << z << endl;
        }
    }

    return 0;
}
