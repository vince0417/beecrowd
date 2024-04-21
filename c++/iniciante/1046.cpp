//Tempo de Jogo
#include <iostream>
using namespace std;

int main() {
    int x, y, duracao = 0;
    cin >> x >> y;

    if (x > y)
    {
        int h1 = 0, h2 = 0;
        for (int i = x; i < 24; i++)
        {
            h1 += 1;
        }
        for (int i = 0; i < y; i++)
        {
            h2 += 1;
        }

        duracao = h1 + h2;
        cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
            
    }
    else if (x < y)
    {
        for (int i = x; i < y; i++)
        {
            duracao += 1;
        }
        
        cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
        
    }
    else{
        duracao = 24;
        cout << "O JOGO DUROU " << duracao << " HORA(S)" << endl;
    }
    
    return 0;
}
