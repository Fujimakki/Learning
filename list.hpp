#ifndef LIST_H
#define LIST_H

/*        <--CLASS ELEMENT DESCRIPTION-->          */

    template <typename T>
    class Element
    {
    public:
        T data;
        Element* next;
        int id;

        Element();

        Element(T);

        Element(const Element&);
    
        ~Element()
        {
            //delete[] next;
        }
    };

/*        <--CLASS LIST DESCRIPTION-->          */

    template <typename T>
    class List: protected Element<T>
    {
    private:
        Element<T>* first;
        Element<T>* current;
    public:
        List();

        List(T);

        List(const List&);

        ~List()
        {
            while (!isEmpty())
            {
                /*Element<T>* temp = first;
                first = first->next;            
                delete temp;*/
            }
        }

        bool isEmpty();

        void push(T);

        T pop();

        void clear();
        
        int size();

        void insert(List<T>, int);

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
    Element<T>::Element()
    {
        this->next = nullptr;
    }

    template <typename T>
    Element<T>::Element(T data)
    {
        this->data = data;
        this->next = nullptr;
    }

    template <typename T>
    Element<T>::Element(const Element &temp)
    {
        this->next = temp->next;
        this->data = temp->data;
    }

/*    <--CLASS LIST FUNCTIONS DESCRIPTION-->       */

    template <typename T>
    List<T>::List()
    {
        first = this->next;
    }

    template <typename T>
    List<T>::List(T data)
    {
        Element<T> *element = new Element<T>(data);
        if(first == nullptr)
        {
            element->id = 1;
        }
        else
        {
            element->id = current->id + 1;
        }
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
        Element<T>* elem = new Element<T>(data);
        if(isEmpty())
        {
            current = elem;
            current->id = 1;
            first = current;
        }
        else
        {
            elem->id = current->id + 1;
            current->next = elem;
            current = elem;
        }
    }

    template <typename T> 
    T List<T>::pop()
    {
        Element<T>* element;
        element = first;
        if(first != nullptr)
        {
            first = first->next;
        }
        T data = element->data;
        return data;
    }

    template <typename T>
    void List<T>::clear()
    {
        while (!isEmpty())
        {
            Element<T>* temp = first;
            first = first->next;            
            delete temp;
        }
    }

    template <typename T>
    int List<T>::size()
    {
        return current->id;
    }

    template <typename T>
    void List<T>::insert(List<T> new_elem,int place)
    {
        Element<T>* element = first;
        while (element->id != place)
        {
            element = element->next;
            if(element->id == place-1)
            {
                current = element;
            }
        }
        while(new_elem.first != nullptr)
        {
            new_elem.first->id = place;
            place++;
            current->next = new_elem.first;
            current = current->next;
            new_elem.first = new_elem.first->next;
        }
        while (element != nullptr)
        {
            element->id = place;
            place++;
            current->next = element;
            element = element->next;
            current = current->next;
        }
        
        
    }

#endif //LIST_H