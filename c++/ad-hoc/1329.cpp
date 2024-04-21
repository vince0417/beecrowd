//Cara ou Coroa
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, maria = 0, joao = 0;
    
    while (true)
    {
        cin >> num;
        if (num == 0)
        {
            return 0;
        }

        for (int i = 0; i < num; i++)
        {
            int vez;
            cin >> vez;

            if (vez == 0)
            {
                maria += 1;
            }
            else
                joao += 1;
        }
        cout << "Mary won " << maria << " times and John won " << joao << " times\n";
        maria = 0;
        joao = 0;
    }
    
}
