//Seis Números Ímpares
#include <iostream>
using namespace std;

int main () {
    int num, max = 0;

    cin >> num;
    for (int i = num; max < 6 ; i++)
    {
        if (i % 2 == 1)
        {
            cout << i << endl;
            max++;
        }    
    }
    
    return 0;
}
