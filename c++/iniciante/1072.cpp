//Intervalo 2
#include <iostream>
using namespace std;

int main () {
    int quant, num, fora = 0, dentro = 0;

    cin >> quant;
    for (int i = 0; i < quant; i++)
    {
        cin >> num;
        if (num >= 10 and num <= 20)
        {
            dentro++;
        }
        else
            fora++;
        
    }
    
    cout << dentro << " in" << endl;
    cout << fora << " out" << endl;

    return 0;
}
