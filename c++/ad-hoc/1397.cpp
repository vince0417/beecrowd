//Jogo do Maior
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    while (cin >> num)
    {
        if (num == 0) break;
        int t1 {0}, t2{0};
        for (int i = 0; i < num; i++)
        {
            int n1, n2;
            cin >> n1 >> n2;
            
            if (n1 > n2) t1++;
            else if (n2 > n1) t2++;
        }
        cout << t1 << " " << t2 << endl;
    }
    
    return 0;
}
