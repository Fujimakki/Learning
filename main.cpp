#include "stack.hpp"
#include "iostream"

int main ()
{
    Stack stack;
    int elem;
    for(int i = 0; i < 5; i ++)
    {
        std::cout << "Please enter a new element of stack. The new element will be ";
        std::cin >> elem;
        stack.push(elem);
    }
    if (!stack.isEmpty())
    {
        std::cout << "\nThe stack isn't empty.\n\n";
    }
    else
    {
        std::cout << "\nThe stack is empty.\n\n";
    }
    while (!stack.isEmpty())
    {
        std::cout << "The last element in the stack is " << stack.pop () << ".\n";
    }

    return 0;
}