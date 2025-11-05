#include <iostream>
#include <string>

class Car
{
public:
    std::string name;
    std::string color;
    int tyres;
    std::string model;
    int seats;
};

int main()
{
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
        std::cout << "Car " << i + 1 << " Details: " << "\nName: " << cars[i].name << "\nColor: " << cars[i].color << "\nTyres: " << cars[i].tyres << "\nModel: " << cars[i].model << "\nSeats: " << cars[i].seats << "\n"
                  << std::endl;
    }

    return 0;
}