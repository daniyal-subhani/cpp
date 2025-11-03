#include <iostream>
#include <string>


int main() {
    int x = 25;
    int y = 100;

    std::string result = (x > y) ? "Good Morning" : "Good Evening";
    std::cout << result << std::endl;
    return 0;
}