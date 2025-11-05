#include <iostream>
#include <string>


class Car {
    private:
        std::string speed;
        std::string algorithm;
        public:
        void setSpeed(const std::string& s) {
            speed = s;
        };
        std::string getSpeed() const {
            return speed;
        };


};

int main() {
    Car myCar;
    myCar.setSpeed("100 km/h");
    std::cout << "Car speed: " << myCar.getSpeed() << std::endl;
    return 0;
}