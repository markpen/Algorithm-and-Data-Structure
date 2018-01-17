#include "Heap.h"

Heap::Heap()
{
    //ctor
}

Heap::~Heap()
{
    //dtor
}

int Heap::peek() {
    assert("peek haven't been implemented!");
    return -1;
}

void Heap::push(int x) {
    assert("push haven't been implemented!");
}

void Heap::pop() {
    assert("pop haven't been implemented!");
}

int Heap::size() {
    assert("size haven't been implemented!");
    return -1;
}

bool Heap::isEmpty() {
    assert("isEmpty haven't been implement!");
    return false;
}

void Heap::swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
