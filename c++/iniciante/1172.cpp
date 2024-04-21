//Substituição em Vetor I
#include <iostream>
using namespace std;

int main () {
    int num, x[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> num;

        if (num < 1)
        {
            cout << "X[" << i << "] = " << "1" << endl;
        }
        else{
            cout << "X[" << i << "] = " << num << endl;
        }
        
    }
    
    return 0;
}
