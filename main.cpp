#include <iostream>
#include "list.hpp"

int main()
{
    List<int> myQueue;
    std::cout << "New queue is created.\n";

    if(myQueue.isEmpty())
    {
        std::cout << "Starting filling of the queue.\n";
        for(int i = 1; i < 6; i++)
        {
            myQueue.push(i);
        }
        std::cout << "The queue is filled. Stopping the filling.\n";
    }

    std::cout << "The size of the queue is " << myQueue.size() << std::endl;

    List<int> elem(1);
    elem.push(2);
    
    myQueue.insert(elem, 3);
    std::cout << "1 was iserted in the queue." << std::endl;

    std::cout << "The size of the queue is " << myQueue.size() << std::endl;

    if(!myQueue.isEmpty())
    {
        std::cout << "Starting printing of the queue.\n";
        while(!myQueue.isEmpty())
        {
            int temp = myQueue.pop();
            std::cout << temp << ", ";
            if(temp == 4)
            {
                myQueue.clear();
                std::cout << "the queue is cleared." << std::endl;
            }
        }
        std::cout << "Printing is ended.\n";
    }
    else
    {
        std::cout << "The queue is empty. Stopping the program.\n";
    }

    return 0;
}