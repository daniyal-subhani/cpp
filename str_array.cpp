#include <iostream>
#include <string>
#include <vector>

struct employee
{
    std::string name;
    int id;
    double salary;
    std::string company;
    std::string position;
    std::string department;
};

int main()
{
    std::vector<employee> employees = {
        {"John Doe", 101, 60000.0, "TechCorp", "Software Engineer", "Development"},
        {"Hello World", 102, 55000.0, "WebSolutions", "Frontend Developer", "Design"},
        {"Linus Torvalds", 103, 112000.0, "OpenSource Inc.", "Kernel Developer", "Research"}};

    for (int i = 0; i < employees.size(); i++)
    {
        /* code */
        std::cout << "Employee " << (i + 1) << ":\n";
        std::cout << "Name:" << employees[i].name << "\n";
        std::cout << "ID: " << employees[i].id << "\n";
        std::cout << "Salary: $" << employees[i].salary << "\n";
        std::cout << "Company: " << employees[i].company << "\n";
        std::cout << "Position: " << employees[i].position << "\n";
        std::cout << "Department: " << employees[i].department << "\n";
        std::cout << "--------------------------\n";
    }

    return 0;
}