#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    numbers.push_back(6);
    numbers.push_back(7);
    numbers.push_back(8);
    numbers.push_back(9);
    numbers.push_back(10);
    numbers.push_back(1112);
    numbers.pop_back();
    std::cout << "Vector elements: " << std::endl;
    for (int i = 0; i < numbers.size(); i++)
    {
        /* code */
        std::cout << numbers[i] << std::endl;
    }

    return 0;
}