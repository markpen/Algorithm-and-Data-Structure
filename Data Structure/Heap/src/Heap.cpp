#include "Heap.h"

Heap::Heap()
{
    heapSize = -1;
    //ctor
}

Heap::~Heap()
{
    //dtor
}

int Heap::peek() {
    if(data.size() > 0) return data[0];
    else return -1;
}

void Heap::push(int x) {
    if(heapSize == data.size() - 1) doubleSize();

    int pos = ++ heapSize;

    // percolate up
    for(; pos >= 1 && x > data[pos / 2]; pos /= 2) data[pos] = data[pos / 2];

    data[pos] = x;

}

void Heap::pop() {
    if(heapSize >= 0) {
        data[0] = data[heapSize --];
        // percolate down
        heapify(0);
    }
}

void Heap::heapify(int pos) {
    int left = pos * 2, right = pos * 2 + 1, largest = pos;

    if(left <= heapSize && data[left] > data[largest]) largest = left;
    if(right <= heapSize && data[right] > data[largest]) largest = right;

    if(largest != pos) {
        // swipe
        int temp = data[pos];
        data[pos] = data[largest];
        data[largest] = temp;
        heapify(largest);
    }
}

int Heap::size() {
    return heapSize + 1;
}

void Heap::doubleSize() {
    if(data.size() == 0) {
        std::vector < int > temp(1);
        data = temp;
    } else {
        std:: vector < int > temp(data.size() * 2);
        for(int i = 0; i < data.size(); ++ i) temp[i] = data[i];
        data = temp;
    }
}

bool Heap::isEmpty() {
    return heapSize == -1;
}

void Heap::createHeap(std::vector < int > nums) {
    for(auto x: nums) push(x);
}
