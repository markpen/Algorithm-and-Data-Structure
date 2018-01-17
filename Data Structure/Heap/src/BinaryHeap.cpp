#include "BinaryHeap.h"

BinaryHeap::BinaryHeap()
{
    heapSize = 0;
    data.push_back(-1);
    //ctor
}

BinaryHeap::~BinaryHeap()
{
    //dtor
}

int BinaryHeap::peek() {
    if(data.size() > 1) return data[1];
    assert("No more data!");
}

void BinaryHeap::push(int x) {
    if(heapSize == data.size() - 1) doublSize();

    // percolate up
    int pos = ++ heapSize;
    for(;pos > 1 && x > data[pos / 2]; pos /= 2) data[pos] = data[pos / 2];
    data[pos] = x;
}

void BinaryHeap::pop() {
    assert(heapSize != 0 && "No more data, cannot pop!");

    data[1] = data[heapSize --];
    for(int pos = 1, largest = -1; pos <= heapSize; pos = largest) {
        int left = 2 * pos, right = 2 * pos + 1;
        largest = pos;
        if(left <= heapSize && data[left] > data[largest]) largest = left;
        if(right <= heapSize && data[right] > data[largest]) largest = right;

        if(pos != largest) swap(data[pos], data[largest]);
        else break;
    }
}


int BinaryHeap::size() {
    return heapSize;
}

bool BinaryHeap::isEmpty() {
    return heapSize == 0;
}

void BinaryHeap::createHeap(std::vector< int >& nums) {
    for(auto x : nums) push(x);
}

void BinaryHeap::doublSize() {
    std::vector< int > temp(data.size() * 2);
    for(int i = 0; i < data.size(); ++ i) temp[i] = data[i];
    data = temp;
}

void BinaryHeap::heapify(int pos) {
    int left = pos * 2, right = pos * 2 + 1, largest = pos;

    if(left <= heapSize && data[left] > data[largest]) largest = left;
    if(right <= heapSize && data[right] > data[largest]) largest = right;

    if(largest != pos) {
        swap(data[largest], data[pos]);
        heapify(largest);
    }
}
