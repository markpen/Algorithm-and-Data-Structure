#include "BinaryIndexTree.h"

BinaryIndexTree::BinaryIndexTree()
{
    //ctor
}

BinaryIndexTree::~BinaryIndexTree()
{
    //dtor
}

void BinaryIndexTree:: add(int x, int val) {
    for(int i = x + 1; i <= nums.size(); i += lowBits(i)) {
        sums[i] += val;
    }
}

int BinaryIndexTree:: lowBits(int x) {
    return x & (-x);
}

int BinaryIndexTree:: sum(int x) {
    int ans = 0;
    for(int i = x + 1; i > 0; i -= lowBits(i)) {
        ans += sums[i];
    }
    return ans;
}

int BinaryIndexTree:: sum(int left, int right) {
    return sum(right) - sum(left - 1);
}
