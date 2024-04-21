//Conversão de Tempo
#include <iostream>
using namespace std;

int main() {
    int num, h = 0, m = 0, s = 0;

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        s++;
        if (s == 60)
        {
           m += 1;
           s = 0; 
        }
        if (m == 60)
        {
            h += 1;
            m = 0;
        }
        
    }

    cout << h << ":" << m << ":" << s << endl;
    return 0;
}
