//Seleçao em Vetor I
#include <iostream>
using namespace std;

int main () {
    double x; 
    float a[100];

    cout.precision(1);
    cout.setf(ios::fixed);

    for (int i = 0; i < 100; i++)
    {
        cin >> x;
        
        if (x <= 10)
        {
            cout << "A[" << i << "] = " << x << endl;
        }
        else
            continue;
                
    }
    
    return 0;
}
