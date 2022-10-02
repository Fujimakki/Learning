#include "stack.hpp"

bool empty = 0, full = 0;

struct Stack
{
int stk [10];
int head = 0;
};

struct Stack Stck;

bool isFull ()
{
    if (Stck.head > 9)
    {
        Stck.head --;
        full = 1;
    }
    return full;
}

void push (int elem)
{
    if (Stck.head < 10 && !full)
    {
        Stck.stk [Stck.head] = elem;
        std::cout << "The element is successfully added.\n";
        Stck.head ++;
        empty = 0;
    }
    else
    {
        std::cout << "The stack is full. You can't add the element.\n";
        Stck.head --;
    }
}

int pop ()
{
    Stck.head --;
    return Stck.stk [Stck.head+1];
}

bool isEmpty ()
{
    if (Stck.head < 0)
    {
        Stck.head ++;
        empty = 1;
    }
    return empty;
}



void print ()
{
    if (!empty)
    {
        for (int i = Stck.head; i >= 0; i --)
        {
            std::cout << "The " << i+1 << " element is " << Stck.stk [i] << ".\n";
        }
    }
}