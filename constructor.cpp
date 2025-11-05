#include <iostream>
#include <string>


class Car {
    public:
    std::string model;
    int year;
    Car() {
        model = "Unknown";
        year = 0;
        std::cout << "Default constructor called: " << model << ", " << year << std::endl;
    };
};


int main() {
    Car myCar;
    myCar.model = "Toyota";
    myCar.year = 2020;
    std::cout << "Car model: " << myCar.model << ", Year: " << myCar.year << std::endl;
    return 0;
}