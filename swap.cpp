// #include <iostream>

// int main() {
//     int a = 5;
//     int b = 10;
//     std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
//     std::swap(a, b);
//     std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
//     return 0;
// }


#include <iostream>

int main() {
    int a = 4;
    int b = 44;
    int temp = 0;
    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    temp = a;
    a = b;
    b = temp;
    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
    return 0;
}