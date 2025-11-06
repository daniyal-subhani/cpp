#include <iostream>


class Rectangle {
    private:
        double length;
        double width;
        public: 
        Rectangle(double l, double w) {
            length  = l;
            width = w;
        };
        double area() {
            return length * width;
        }
};



int main() {
   double total = Rectangle(10.0, 50.0).area();
    std::cout << "Area of Rectangle: " << total << std::endl;
    return 0;
}