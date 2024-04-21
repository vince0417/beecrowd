//Identificando o Chá
#include <iostream>
using namespace std;

int main() {
    int cha, acertos = 0;
    cin >> cha;
    for (int i = 0; i < 5; i++)
    {
        int pessoa;
        cin >> pessoa;
        if (pessoa == cha)
        {
            acertos += 1;
        }
        
    }
    
    cout << acertos << endl;
    return 0;
}
