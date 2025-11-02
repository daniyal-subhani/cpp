/* 
Declaring a variable in C++
    type variableName = value;
Example:
    int myNumber = 5;
*/


#include <iostream>

int main() {
    int myNumber = 5;             // Integer (whole number)
    float myFloat = 5.99;          // Floating point number
    double myDouble = 9.98;        // Double precision floating point number
    char myLetter = 'D';           // Character
    bool myBoolean = true;         // Boolean
    std::string myText = "Hello";  // String

    std::cout << "Integer: " << myNumber << "\n";
    std::cout << "Float: " << myFloat << "\n";
    std::cout << "Double: " << myDouble << "\n";
    std::cout << "Character: " << myLetter << "\n";
    std::cout << "Boolean: " << myBoolean << "\n";
    std::cout << "String: " << myText << "\n";

    

    return 0;
}