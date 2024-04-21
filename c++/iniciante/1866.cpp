//Conta
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    int vetor[num];
    for (int i = 0; i < num; i++)
    {
        cin >> vetor[i];
    }

    for (int i = 0; i < num; i++)   
    { 
        if (vetor[i]%2 == 1)
        {
            cout << "1" << endl;
        }
        else
            cout << "0" << endl;
        
    }
    
    
    // for (int i = 0; i < num; i++)
    // {
    //     int x;
    //     cin >> x;
    //     if (x%2 == 1)
    //     {
    //         cout << "1" << endl;
    //     }
    //     else
    //         cout << "0" << endl;
        
    // }
    
    return 0;
}
