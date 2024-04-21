//Ho Ho Ho
#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        if (i == (num-1))
        {
            cout << "Ho!" << endl;
            return 0;
        }
        
        cout << "Ho ";
        
    }
    
}
