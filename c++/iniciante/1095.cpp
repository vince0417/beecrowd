//Sequencia IJ 1
#include <iostream>
using namespace std;

int main () {

    int i = 1, j = 60;

    cout << "I=" << i << " J=" << j << endl;

    while (j != 0)
    {
        i = i + 3;
        j = j - 5;

        cout << "I=" << i << " J=" << j << endl;
    }
    
    return 0;

}
