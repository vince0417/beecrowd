//I am Toorg!
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num, aux = 0;
    cin >> num;

    for (int i = 1; i <= num+1; i++)
    {
        aux++;
        string perg;
        getline(cin, perg);
    }
    for (int i = 0; i < aux-1; i++)
    {
        cout << "I am Toorg!\n";
    }
    
    return 0;
}
