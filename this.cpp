#include <iostream>
#include <string>

class Person {
    public:
    std::string name;
    int age;
    Person(std::string name, int age) {
        this->name = name;
        this->age = age;
    }


};


int main() {
    Person person("Hello", 44);
    std::cout << "Name: " << person.name << ", Age: " << person.age << std::endl;
    return 0;
}