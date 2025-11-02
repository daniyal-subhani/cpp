#include <iostream>
#include <string>

int main() {
    const int myVar = 10;
    const std::string myStr = "Hello world!";
    const std::string hello = "Hello World!";
    std::cout << hello << std::endl;

    std::cout << myVar << "\n" << myStr << std::endl;
    return 0;

}