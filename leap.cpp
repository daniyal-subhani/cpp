#include <iostream>

int main() {
    int year = 2000;
    if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) {
        std::cout << year << " is a leap year." << std::endl;
     } else {
        std::cout << year << " is not a leap year. " << std::endl;
     }
}