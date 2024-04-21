//Média 1
#include <iostream>
using namespace std;

int main() {
    float n1, n2, media = 0;
    cin >> n1 >> n2;
    
    media += ((n1*3.5)+(n2*7.5))/11;

    cout.precision(5);
    cout.setf(ios::fixed);
    cout << "MEDIA = " << media << endl;

    return 0;
}
