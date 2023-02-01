#include "StckBClss.hpp"
void StckBClss::set(void *newData)
{
    StckBClss* newElem = new StckBClss(newData);
    previous = newElem;        
}

void* StckBClss::get()
{
    StckBClss* lastElem = previous;
    previous = lastElem->previous;
    void* lastData = lastElem->data;
    delete lastElem;
    return lastData;
}

bool StckBClss::isEmpty()
{
    return previous == nullptr;
}