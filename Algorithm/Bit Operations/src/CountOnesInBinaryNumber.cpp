#include "CountOnesInBinaryNumber.h"

CountOnesInBinaryNumber::CountOnesInBinaryNumber()
{
    //ctor
}

CountOnesInBinaryNumber::~CountOnesInBinaryNumber()
{
    //dtor
}

int CountOnesInBinaryNumber::countOnes(int x) {
    int count = 0;
    while(x) {
        x &= x - 1;
        count ++;
    }
    return count;
}

int CountOnesInBinaryNumber::countOnes(long long x) {
    x = (x & m1) + ((x >> 1) & m1);
    x = (x & m2) + ((x >> 2) & m2);
    x = (x & m4) + ((x >> 4) & m4);
    x = (x & m8) + ((x >> 8) & m8);
    x = (x & m16) + ((x >> 16) & m16);
    x + (x & m32) + ((x >> 32) & m32);
    return (int)x;
}
