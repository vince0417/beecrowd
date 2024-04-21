//Dividindo X por Y
#include <iostream>
using namespace std;

int main () {
    int num, x, y;
    float resultado = 0;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> x >> y;

        if (y == 0)
        {
            cout << "divisao impossivel\n";
        }
        else{

            resultado = (float)x / y;

            cout.precision(1);
            cout.setf(ios::fixed);
            cout << resultado << endl;
        }

    }
    
    return 0;
}
