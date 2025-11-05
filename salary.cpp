#include <iostream>
#include <string>


class Employee {
    private:
        double salary;
        public: 
        void setSalary(double s) {
            salary = s;
        };
        double getSalary() {
            return salary;
        };
};

int main() {
    Employee emp;
    emp.setSalary(50000.0);
    std::cout << "Employee Salary: $" << emp.getSalary() << std::endl;
    return 0;
}