#include <iostream>
#include <string>



int main() {
    std::string text = "This is a simple string index example.";
    std::string change = "hello";
    change.at(0) = 'H';
    std::cout << change << "\n";
    std::cout << text.at(0);
    return 0;
}