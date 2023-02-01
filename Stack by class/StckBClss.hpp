#ifndef SBCl
#define SBCl

class StckBClss
{
    private:
        void *data;
        StckBClss* previous = nullptr;
    public:
        StckBClss(void *_data)
        {
            data = _data;
        }
        void set(void *newData);
        void* get();
        bool isEmpty();
};

#endif //SBCl