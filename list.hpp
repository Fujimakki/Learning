#ifndef LIST_H
#define LIST_H

/*        <--CLASS LIST DESCRIPTION-->          */

    template <typename T>
    class List
    {
    private:
        struct Element
        {
            T data;
            Element* next;

            Element();

            Element(T);

            Element(const Element&);
        
            ~Element() {}
        };
        
        int qsize;

        Element* first;
        Element* current;
    public:
        List();

        List(T);

        List(const List&);

        ~List()
        {
            while (!isEmpty()) {}
        }

        bool isEmpty();

        void push(T);

        T pop();

        void clear();
        
        int size();

        bool operator==(/*List left, */List &right)
        {
            return this->data == right->data;
        }

        List& operator=(const List &temp)
        {
            if(this != &temp)
            {
                this->next = temp.next;
                this->data = temp.data;
            }
            return *this;
        }

    };

/*    <--CLASS ELEMENT FUNCTIONS DESCRIPTION-->       */

    template <typename T>
    List<T>::Element::Element()
    {
        this->next = nullptr;
    }

    template <typename T>
    List<T>::Element::Element(T data)
    {
        this->data = data;
        this->next = nullptr;
    }

    template <typename T>
    List<T>::Element::Element(const Element &temp)
    {
        this->next = temp->next;
        this->data = temp->data;
    }

/*    <--CLASS LIST FUNCTIONS DESCRIPTION-->       */

    template <typename T>
    List<T>::List()
    {
        first = nullptr;
        qsize = 0;
    }

    template <typename T>
    List<T>::List(T data)
    {
        Element *element = new Element(data);
        if(current == nullptr)
        {
            current = element;
            first = current;
        }
        else
        {
            current->next = element;
            current = current->next;
        }
        qsize++;
    }

    template <typename T>
    List<T>::List(const List& temp)
    {
        this->current = temp.current;
        this->first = temp.first;
    }

    template <typename T>
    bool List<T>::isEmpty()
    {
        return first == nullptr;
    }

    template <typename T>
    void List<T>::push(T data)
    {
        qsize++;
        Element* elem = new Element(data);
        if(isEmpty())
        {
            current = elem;
            first = current;
        }
        else
        {
            current->next = elem;
            current = elem;
        }
    }

    template <typename T> 
    T List<T>::pop()
    {
        if(first != nullptr)
        {
            Element* element;
            element = first;
            if(first != nullptr)
            {
                first = first->next;
            }
            T data = element->data;
            qsize++;
            return data;
        }
        else
        {
            return 0;
        }
    }

    template <typename T>
    void List<T>::clear()
    {
        while (!isEmpty())
        {
            Element* temp = first;
            first = first->next;            
            delete temp;
        }
        qsize = 0;
    }

    template <typename T>
    int List<T>::size()
    {
        return qsize;
    }

#endif //LIST_H