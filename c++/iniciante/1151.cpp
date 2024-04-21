//Fibonacci Fácil
#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    
    int cont[num];
    for(int id = 0; id < 2; id++)
    {
        cont[id] = id;
        cout << cont[id] << " ";
    }
    
    for(int i = 2; i < num; i++)
    {
        if(i == num-1){
            cont[i] = cont[i-1]+cont[i-2];
            cout << cont[i] << endl;
        }
        else{
            cont[i] = cont[i-1]+cont[i-2];
            cout << cont[i] << " ";
        }
        
    }
    
    return 0;
}
