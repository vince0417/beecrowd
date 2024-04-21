//Sequencia IJ 3
#include <iostream>
using namespace std;

int main () {
    int i = 1, j = 7, aux = 1;
    cout << "I=" << i << " J=" << j << endl;

    while (true)
    {
        i = i;
        j -= 1;
        aux += 1;
        cout << "I=" << i << " J=" << j << endl;

        if (aux == 3)
        {
            i += 2;
            j = 0;
            j = i + 6;
            cout << "I=" << i << " J=" << j << endl;
            aux = 1;
        }
        if (i == 9 and j == 15)
        {
            while (j != 13)
            {
                j -= 1;
                cout << "I=" << i << " J=" << j << endl;
            }
            
            break;
        }
    }
  
    return 0;
}
