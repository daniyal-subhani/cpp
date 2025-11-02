#include <iostream>


int main() {
    int a = 5, b = 10, c = 15, d = 20;
    int x, y, z;
    x = y = z = 50;


    std::cout << "Values: " << a << ", " << b << ", " << c << ", " << d << std::endl;

    std::cout << x << ", " << y << ", " << z << std::endl;
    std::cout << "Sum: " << x + y + z << std::endl;
    return 0;
}