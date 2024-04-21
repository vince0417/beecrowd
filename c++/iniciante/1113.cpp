//Crescente e Decrescente
#include <iostream>
using namespace std;

int main () {
    int x, y;

    do
    {
        cin >> x >> y;

        if (x>y)
        {
            cout << "Decrescente" << endl;
        }
        else if (x<y)
        {
            cout << "Crescente" << endl;
        }

    } while (x!=y);

    return 0;
 
}
