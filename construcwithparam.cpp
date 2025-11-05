#include <iostream>
#include <string>


class Car {
    public:
    std::string name;
    int year;
    Car(std::string n, int y) {
        name = n;
        year = y;
    };
};

int main() {
    Car carobj1("Toyota", 2020);
    Car carobj2("Honda", 2018);
    std::cout << carobj1.name << " " << carobj1.year << std::endl;
    std::cout << carobj2.name << " " << carobj2.year << std::endl;
    return 0;
};