//Sequência S
#include <iostream>
using namespace std;

int main() {
    float s = 1;
    for(float i = 2; i <= 100; i++)
    {
        s += 1/i;
    }
    
    cout.precision(2);
    cout.setf(ios::fixed);
    
    cout << s << endl;
    
  return 0;
}
