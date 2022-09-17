#include "func/lib.h"
#include "../programm_rebuilt/TutorialConfig.h"

int main ()
{
    std::cout << "Hello world! ";
    std::cout << "The programms version is " << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR;
    connect();
    return 0;
}