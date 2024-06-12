//Sequência S II
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s {1}, n1 {3}, n2 {2};
    while (n2 <= 39)
    {
        s += (s+n1)/n2;
        n1 += 2;
        n2 += n2;
    }
    
    cout.precision(2);
    cout.setf(ios::fixed);
    cout << static_cast<float>(s) << endl;
    return 0;
}
