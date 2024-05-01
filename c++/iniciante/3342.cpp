//Keanu
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int white {0}, black {0};
    if (num%2 == 1)
    {
        black = (num*num-1)/2;
        white = black+1;
    }
    else{
        white = (num*num)/2;
        black = (num*num)/2;
    }

    cout << white << " casas brancas e " << black << " casas pretas\n";
    return 0;
}
