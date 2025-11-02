#include <iostream>
#include <string>

int main() {
     std::string str1 = "Hello, ";
     std::string str2 = "World!";

    std::cout << str1.append(str2) << std::endl;
    return 0;
}