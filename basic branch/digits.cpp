#include <iostream>

int main ()
{
    std::cout << "Please, enter a five-digit number. Your number is ";
    int number;
    std::cin >> number;

    std::cout << std::endl << "1 figure is " << number / 10000;
    std::cout << std::endl << "2 figure is " << (number / 1000)%10;
    std::cout << std::endl << "3 figure is " << (number / 100)%10;
    std::cout << std::endl << "4 figure is " << (number / 10)%10;
    std::cout << std::endl << "5 figure is " << number % 10 << std::endl;

    return 0;
}