#ifndef SBCl
#define SBCl

class StckBClss
{
    private:
        void *data;
        StckBClss* previous = nullptr;
    public:
        StckBClss()
        {
            data = nullptr;
        }
        StckBClss(void *_data, StckBClss* _previous)
        {
            data = _data;
            previous = _previous;
        }
        void set(void *newData);
        void* get();
        bool isEmpty();
};

#endif //SBCl