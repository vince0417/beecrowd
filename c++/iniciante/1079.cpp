//Médias Ponderadas
#include <iostream>
using namespace std;

int main () {
    int num;
    float n1, n2, n3, resultado = 0;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cin >> n1 >> n2 >> n3;

        resultado = (n1*2+n2*3+n3*5)/10;

        cout.precision(1);
        cout.setf(ios::fixed);
        cout << resultado << endl;
                       
    }
    
    return 0;
}
