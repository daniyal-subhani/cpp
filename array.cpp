#include <iostream>


int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        /* code */
        std::cout << arr[i] << std::endl;
    }
    return 0;
    
}