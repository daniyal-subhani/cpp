#include <iostream>
#include <string>


class Car {
    public:
     std::string name;
    std::string color;
    int tyres;
    std::string model;
    int seats;

    void displayDetails() {
        std::cout << "Car Details: " << "\nName: " << name << "\nColor: " << color << "\nTyres: " << tyres << "\nModel: " << model << "\nSeats: " << seats << "\n" << std::endl;
    }
};

int main() {
    Car car1;
    car1.name = "Toyota";
    car1.color = "Red";
    car1.tyres = 4;
    car1.model = "Corolla";
    car1.seats = 5;
    Car car2;
    car2.name = "Honda";
    car2.color = "Black";
    car2.tyres = 4;
    car2.model = "Civic";
    car2.seats = 5;
    Car car3;
    car3.name = "Ford";
    car3.color = "Blue";
    car3.tyres = 4;
    car3.model = "Focus";
    car3.seats = 5;

    Car cars[3] = {car1, car2, car3};

    for (int i = 0; i < 3; i++)
    {
        /* code */
        cars[i].displayDetails();
    };
    return 0;
    
}