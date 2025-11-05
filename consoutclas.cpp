#include <iostream>
#include <string>

class Car
{
public:
    std::string name;
    int year;
    Car();
};

Car::Car()
{
    name = "Unknown";
    year = 0;
}

int main()
{
    Car myCar;
    myCar.name = "Toyota";
    myCar.year = 2020;
    std::cout << "Car Name: " << myCar.name << ", Year: " << myCar.year << std::endl;
    return 0;
}