//Tomadas Elétricas
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int filtros, aux {0};
        cin >> filtros;
        for (int i = 0; i < filtros; i++)
        {
            int tomadas;
            cin >> tomadas;
            aux += tomadas;
        }
        cout << aux-(filtros-1) << endl;
    }
    
    return 0;
}
