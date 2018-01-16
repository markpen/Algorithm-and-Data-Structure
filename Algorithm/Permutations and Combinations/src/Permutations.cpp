#include "Permutations.h"

Permutations::Permutations()
{
    //ctor
}

Permutations::~Permutations()
{
    //dtor
}

// return true if there is next permutation
bool Permutations::nextPermutation(std::vector< int >& nums) {

    // find the last element bigger then previous number
    int i = 0;
    for(i = nums.size() - 1; i > 0; i --) if(nums[i] > nums[i - 1]) break;
    if(i == 0) return false;

    // find the number greater then i - 1
    int j = 0;
    for(j = nums.size() - 1; j >= 0; j --) if(nums[j] > nums[i - 1]) break;

    // swape i - 1 and j
    swap(nums[i - 1], nums[j]);
    for(int k = nums.size() - 1; k > i; i ++, k --) {
        swap(nums[k], nums[i]);
    }

    return true;
}

void Permutations::swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
