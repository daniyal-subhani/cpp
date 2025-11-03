#include <iostream>
#include <string>

struct 
{
    /* data */
    std::string name;
    int age;
    char grade;
} student;


int main() {
    student.name = "Johnny";
    student.age = 20;
    student.grade = 'A';
    std::cout << "The name of the student is: " << student.name << " and the age is: " << student.age << " and student gets grade: " << student.grade << std::endl;
    return 0;
}