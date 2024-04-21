//Sequencia IJ 2
#include <iostream>
using namespace std;

int main () {
    int i = 1, j = 7;

    cout << "I=" << i << " J=" << j << endl;
    while (i != 9 and j != 5)
    {
        i = i;
        j = j - 1;
        cout << "I=" << i << " J=" << j << endl;

        if (j == 5)
        {
            i = i + 2;
            j = j + 2;
            cout << "I=" << i << " J=" << j << endl;
        }
        if (i == 9 and j == 7)
        {
            while (j != 5)
            {
                i = i;
                j = j - 1;
                cout << "I=" << i << " J=" << j << endl;
            }
                
        }
        
    }
    
    return 0;

}
