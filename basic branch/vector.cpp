#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter X coordinates: ";
    short int x;
    std::cin >> x;
    std::cout << "Enter Y coordinates: ";
    short int y;
    std::cin >> y;
    std::cout << "Enter Z coordinates: ";
    short int z;
    std::cin >> z;

    std::cout << std::endl << "You have entered the following numbers: X = " << x << ", Y = " << y << ", Z = " << z << ".";
    std::cout << std::endl << "The length of the vector is " << sqrt(x*x + y*y + z*z) << std::endl;

    return 0;
}