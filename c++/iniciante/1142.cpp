//PUM
#include <iostream>
using namespace std;

int main () {
    int num;
    int a = 1, b = 2, c = 3;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << a << " " << b << " " << c << " PUM\n";
        a = a + 4;
        b = b + 4;
        c = c + 4;
    }
    
    return 0;

}
