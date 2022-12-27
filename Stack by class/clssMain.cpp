#include <iostream>
#include <cstdint>
#include "StckBClss.hpp"

int main()
{
    StckBClss stck;
    for(int i = 5; i > 0; i--)
    {
        long a = i + 10;
        void *temp = (void*) a;
        stck.set(temp);
    }
    while(!stck.isEmpty())
    {
        void* data = stck.get();
        int value = (long)data;
        std::cout << value << "\t";
    }
    std::cout << std::endl;
    return 0;
}