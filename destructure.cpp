#include <iostream>
#include <string>

class Person
{
public:
    std::string name;
    int age;
    Person()
    {
        std::cout << "Parent Constructor Called..." << std::endl;
    };
    ~Person()
    {
        std::cout << "Parent Destructor Called..." << std::endl;
    }
};

class Student : public Person
{
public:
    int rollno;
    Student()
    {
        std::cout << "Child Constructor Called..." << std::endl;
    }
    ~Student()
    {
        std::cout << "Child Destructor Called..." << std::endl;
    }
    void getInfo()
    {
        std::cout << "Name: " << name << ", Age: " << age << ", Roll No: " << rollno << std::endl;
    }
};

int main()
{
    Student student1;
    student1.name = "Alice";
    student1.age = 20;
    student1.rollno = 101;
    student1.getInfo();
    return 0;
}