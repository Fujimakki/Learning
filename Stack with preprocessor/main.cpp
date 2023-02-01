
#include <iostream>
#include "stack.hpp"

int main()
{
    typedef STACK(int) myStack;
    std::cout << "Your stack is created.\n";

    if(myStack.isEmpty())
    {
        std::cout << "Your stack is empty. Starting filling.\n";
        for(int i = 1; i < 6; i++)
        {
            myStack.push(i);
        }
        std::cout << "Filling is ended.\n";
    }

    if(!myStack.isEmpty())
    {
        std::cout << "Starting stack data printing.\n";
        while(!myStack.isEmpty())
        {
            std::cout << myStack.pop() << ", ";
        }
        std::cout << "work is ended.\n";
    }

    return 0;
}