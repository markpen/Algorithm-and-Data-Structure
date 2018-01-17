#ifndef BINARYHEAP_H
#define BINARYHEAP_H

#include <Heap.h>
#include <vector>

class BinaryHeap : public Heap
{
    public:
        BinaryHeap();
        virtual ~BinaryHeap();
        int peek();
        void push(int x);
        void pop();
        bool isEmpty();
        int size();
        void createHeap(std::vector< int >& nums);
    protected:
    private:
        std::vector< int > data;
        void doublSize();
        void heapify(int pos);
};

#endif // BINARYHEAP_H
