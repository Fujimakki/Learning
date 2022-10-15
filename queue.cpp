#include "queue.hpp"

struct ELEMENT
{
    int _data;
    ELEMENT* _next;

    ELEMENT(int newData)
    {
        _data = newData;
        _next = nullptr;
    }
};

ELEMENT *currentElement, *firstElement = nullptr;

bool Queue::isEmpty()
{
    return firstElement == nullptr;
}

void Queue::push(int newData)
{
    ELEMENT* newElement = new ELEMENT (newData);
    if(firstElement != nullptr)
    {
        currentElement->_next = newElement;
    }
    currentElement = newElement;
    if(firstElement == nullptr)
    {
        firstElement = currentElement;
    }
}

int Queue::pop()
{
    ELEMENT *element = firstElement;
    int data = element->_data;
    firstElement = element->_next;
    delete element;
    return data;
}