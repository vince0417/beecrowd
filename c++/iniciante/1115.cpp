//Quadrante
#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    while (true)
    {
        cin >> x >> y;
        if (x == 0 or y == 0)
        {
            break;
        }
        
        if (x > 0 and y > 0)
        {
            cout << "primeiro\n";
        }
        else if (x < 0 and y > 0)
        {
            cout << "segundo\n";
        }
        else if (x < 0 and y < 0)
        {
            cout << "terceiro\n";
        }
        else if (x > 0 and y < 0)
        {
            cout << "quarto\n";
        }
    }

    return 0; 
}
