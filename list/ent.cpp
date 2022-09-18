#include "ent.h"
#include <cmath>

void entering ()
{
    int k, n, dig = 1, g = 0;
    std::cout << "Enter a number. Your number is ";
    do
    {
        std::cin >> n;
        std::cout << "Enter a number of digits. Your digit is ";
        std::cin >> k;
        do
        {
            g ++;
            dig *= 10;
        }
        while (n / dig != 0);
    }
    while (k > g);
    k = g-k;
    dig = pow (10, k);
    output (n, dig);
}