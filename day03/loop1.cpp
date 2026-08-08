#include <iostream>

int main(){
    int i;
    int a = 0;
    std::cout << "Please, insert your number for a" << std::endl;
    std::cout << "--> ";
    std::cin >> a;
    std::cout << "Here, it's your loop for, which print massive from 1 to N " << std::endl;
    for (i = 1; i <= a; i++){
        std::cout << i << std::endl;
    }
    std::cout << "i afer loop1111" << i << std::endl;
    return 0;
}

