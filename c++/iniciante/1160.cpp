//Crescimento Populacional
#include <bits/stdc++.h>
using namespace std;

void tempo (int& num);

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int num;
    cin >> num;
    tempo(num);
    return 0;
}

void tempo (int& num){
    for (size_t i {}; i < num; ++i)
    {
        int pA, pB; //População da cidade A e B;
        float cpA, cpB; //Crescimento populacional anual de cada cidade;
        cin >> pA >> pB >> cpA >> cpB;

        int anos{};
        do
        {
            pA += (pA*cpA)/100;
            pB += (pB*cpB)/100;
            ++anos;
            if (anos > 100) break;
        } while (pA <= pB);
        
        if (anos > 100) cout << "Mais de 1 seculo.\n";
        else cout << anos << " anos.\n";
    }
}
