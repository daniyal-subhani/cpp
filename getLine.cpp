#include <iostream>
#include <string>

int main() {
    std::string Paragraph;
    std::cout << "Enter Something: ";
    std::getline(std::cin, Paragraph);
    std::cout << "You entered: " << Paragraph << std::endl;
    return 0;
}