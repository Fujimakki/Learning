#include "stack.hpp"

struct Element {
    int _data;
    Element* _prev;

    Element () {
        _data = 0;
        _prev = nullptr;
    }

    Element (int data, Element* prev = nullptr) {
        _data = data;
        _prev = prev;
    }

    /*~Element() {
        delete _prev;
        _prev = nullptr;
    }*/
};

Element* currentElem = nullptr;

bool Stack::isEmpty() {
    return currentElem == nullptr;
}

void Stack::push (int newValue) {
    Element* newElem = new Element(newValue, currentElem);
    currentElem = newElem;
}

int Stack::pop () {
    Element* lastElem = currentElem;
    currentElem = lastElem->_prev;
    int value = lastElem->_data;
    delete lastElem;
    return value;
}