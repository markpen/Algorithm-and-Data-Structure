#include "HashTable.h"

HashTable::HashTable()
{
    //ctor
}

HashTable::~HashTable()
{
    //dtor
}

bool HashTable::searchKey(int key) {
    assert("searchKey haven't been implemented!");
    return false;
}

void HashTable::insertKey(int key) {
    assert("insertKey haven't been implemented!");
}

void HashTable::insertKeyValue(int key, int val) {
    assert("insertKeyValue haven't been implemented!");
}

void HashTable::deleteKey(int key) {
    assert("deleteKey haven't been implemented!");
}

unsigned HashTable::hashFaction(std::string s) {
    unsigned A = 54059, B = 76963, C = 86969; // prime
    unsigned h = 37; // prime
    for(auto x : s) {
        h = (h * A) ^ (x * B);
    }
    return h % C; // or return h
}
