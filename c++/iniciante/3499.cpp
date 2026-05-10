#include <iostream>

int main(){
    int num;
    std::cin >> num;
    (num <= 3) ? std::cout << "vai ganhar o biscoito\n" : std::cout << "vai ficar sem o biscoito\n";
    return 0;
}
