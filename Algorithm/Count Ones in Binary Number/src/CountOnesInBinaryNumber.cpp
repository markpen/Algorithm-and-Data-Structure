#include "CountOnesInBinaryNumber.h"

CountOnesInBinaryNumber::CountOnesInBinaryNumber()
{
    //ctor
}

CountOnesInBinaryNumber::~CountOnesInBinaryNumber()
{
    //dtor
}

/*
the key of the question is to eliminate the 0s int the tail quickly
*/

int CountOnesInBinaryNumber::countOnes(int x) {
    int count = 0;
    while(x) {
        x &= (x -1);
        count ++;
    }
    return count;
}
