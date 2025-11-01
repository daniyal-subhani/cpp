#include <iostream>

int main() {
    char c = 'H';
    char hello[] = "ello, World!";
    std::cout << c << hello << std::endl;
    std::cout << c << hello;
    return 0;
}