#include <iostream>

int main()
{
    std::cout << "Enter first Value:" << std::endl;
    int a;
    std::cin >> a;
    std::cout << "Enter second Value:" << std::endl;
    int b;
    std::cin >> b;
    std::cout << "Enter Operator: " << std::endl;
    char op;
    std::cin >> op;
    int result;
    switch (op)
    {
    case '+':
        /* code */
        result = a + b;
        break;
    case '-':
        /* code */
        result = a - b;
        break;
    case '/':
        /* code */
        result = a / b;
        break;
    case '*':
        /* code */
        result = a * b;
        break;

    default:
        std::cout << "Invalid Operator" << std::endl;
        
        break;
    }
    std::cout << "The result is: " << result << std::endl;
    return 0;
}