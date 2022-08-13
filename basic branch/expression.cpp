#include <iostream>

int main()
{
    std::cout << "Enter the numbers a, b и f:" << std::endl;
    std::cout << "a is ";
    int a;
    std::cin >> a;
    std::cout << "b is ";
    int b;
    std::cin >> b;
    std::cout << "f is ";
    int f;
    std::cin >> f;

    std::cout << (a + b - f / a) + f * a * a - (a + b) << std::endl;

    return 0;
}