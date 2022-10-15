#include "queue.hpp"

int main ()
{
    Queue queue;
    for(int i = 0; i < 5; i ++)
    {
        std::cout << "Please enter a new element of queue. The new element will be ";
        int elem;
        std::cin >> elem;
        queue.push(elem);
    }
    if (!queue.isEmpty())
    {
        std::cout << "\nThe queue isn't empty.\n\n";
    }
    else
    {
        std::cout << "\nThe queue is empty.\n\n";
    }
    while (!queue.isEmpty())
    {
        std::cout << "The first element in the queue is " << queue.pop () << ".\n";
    }

    return 0;
}