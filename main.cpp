#include "stack.hpp"
#include "iostream"

int main ()
{
    while(!isFull())
    {
        int elem;
        std::cout << "Please enter a new element of structure. The new element will be ";
        std::cin >> elem;
        push(elem);
    }
    if (!isEmpty())
    {
        std::cout << "The stack isn't empty.\n";
        print ();
    }
    else
    {
        std::cout << "The stack is empty.\n";
    }
    while (true)
    {
        if (isEmpty())
        {
            break;
        }
        std::cout << "The last element in the stack is " << pop () << ".\n";
    }
    if (!isEmpty())
    {
        std::cout << "The stack isn't empty.\n";
        print ();
    }
    else
    {
        std::cout << "The stack is empty.\n";
    }

    return 0;
}