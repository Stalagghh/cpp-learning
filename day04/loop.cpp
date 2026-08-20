#include <iostream>
#include <string>

int main(){
    std::string s;
    std::cin >> s;

    if(s == "One" || "Один"){
        std::cout << "OK" << std::endl;
    }
    else{
        std::cout << "NOT OK" << std::endl;
    }
    return 0;
}