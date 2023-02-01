#ifndef STACK_H
#define STACK_H

#define STACK(type)                                                 \
    class                                                           \
    {                                                               \
    private:                                                        \
        class Elem                                                  \
        {                                                           \
        private:                                                    \
            type _data;                                             \
            Elem* _prev;                                            \
        public:                                                     \
            Elem()                                                  \
            {                                                       \
                _data = 0;                                          \
            }                                                       \
            Elem(type new_data, Elem* new_prev)                     \
            {                                                       \
                _data = new_data;                                   \
                _prev = new_prev;                                   \
            }                                                       \
            void push(type new_data)                                \
            {                                                       \
                Elem* newElem = new Elem(new_data, _prev);          \
                _prev = newElem;                                    \
            }                                                       \
            bool isEmpty()                                          \
            {                                                       \
                return _prev == nullptr;                            \
            }                                                       \
            type pop()                                              \
            {                                                       \
                Elem* lastElem = _prev;                             \
                _prev = lastElem->_prev;                            \
                type tmp_data = lastElem->_data;                    \
                return tmp_data;                                    \
            }                                                       \
        };                                                          \
        Elem Elem1;                                                 \
        public:                                                     \
        void push(type new_data)                                    \
        {                                                           \
            Elem1.push(new_data);                                    \
        }                                                           \
        bool isEmpty()                                              \
        {                                                           \
            return Elem1.isEmpty();                                  \
        }                                                           \
        type pop()                                                  \
        {                                                           \
            return Elem1.pop();                                      \
        }                                                           \
                                                                    \
    }                                                               \

#endif //STACK