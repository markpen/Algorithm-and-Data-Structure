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
        x &= (x -1);
        count ++;
    }
    return count;
}
