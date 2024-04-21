//Idades
#include <iostream>
using namespace std;

int main () {
    
    int n1, id = 0;
    float n2, r0;

    do
    {
        cin >> n1;
        if (n1>0)
        {
            n2 = n2 + n1;
            id++;
        }
        
    } while (n1>0);

    r0 = n2/id;

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << r0 << endl;

    return 0;
    
}
