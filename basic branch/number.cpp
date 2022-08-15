#include <iostream>

int main ()
{
    std::cout << "Please, enter a two-digit number. Fore example 99. ";
    std::cout << "Your number is ";
    int num;
    std::cin >> num;

    int num1 = num / 10;
    num %= 10;
    if (num1 < num)
    {
        std::cout << std::endl << "The biggest digit in the number is " << num << std::endl;
        std::cout << "The smallest digit in the number is " << num1 << std::endl;
    }
    if (num1 > num)
    {
        std::cout << std::endl << "The biggest digit in the number is " << num1 << std::endl;
        std::cout << "The smallest digit in the number is " << num << std::endl;
    }
    if (num1 == num)
        std::cout << std::endl << "The digits are equle." << std::endl;

    return 0;
}