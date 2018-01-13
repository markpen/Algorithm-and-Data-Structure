#ifndef HEAP_H
#define HEAP_H

#include <vector>

class Heap
{
    public:
        Heap();
        virtual ~Heap();
        int peek();
        void push(int x);
        void pop();
        void createHeap(std::vector < int > nums);
        int size();
        bool isEmpty();

    protected:
    private:
        std::vector < int > data;
        void heapify(int pos);
        void doubleSize();
        int heapSize;

};

#endif // HEAP_H
