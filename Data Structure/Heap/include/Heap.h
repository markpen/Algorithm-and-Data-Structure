#ifndef HEAP_H
#define HEAP_H

#include<cassert>

class Heap
{
    public:
        Heap();
        virtual ~Heap();
        virtual int peek();
        virtual void push(int x);
        virtual void pop();
        virtual int size();
        virtual bool isEmpty();
    protected:
        void swap(int& a, int&b);
        int heapSize;
    private:
};

#endif // HEAP_H
