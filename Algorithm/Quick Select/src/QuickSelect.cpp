#include "QuickSelect.h"

QuickSelect::QuickSelect()
{
    //ctor
}

QuickSelect::~QuickSelect()
{
    //dtor
}

int QuickSelect::select(std::vector<int>& nums, int k) {
    assert(k < nums.size() && "k should be 0 ~ n - 1");

    return select(nums, 0, nums.size() - 1, k);
}

int QuickSelect::select(std::vector<int>& nums, int left, int right, int k) {
    if(left == right) return nums[left];

    int pivotIndex = left + (right - left) / 2;
    pivotIndex = partition(nums, left, right, pivotIndex);
    if(k == pivotIndex) {
        return nums[k];
    } else if(k < pivotIndex) {
        return select(nums, left, pivotIndex - 1, k);
    } else {
        return select(nums, pivotIndex + 1, right, k);
    }
}

int QuickSelect::partition(std::vector<int>& nums, int left, int right, int pivotIndex) {
    int pivotValue = nums[pivotIndex];
    std::swap(nums[right], nums[pivotIndex]);

    int storeIndex = left;
    for(int i = left; i < right; ++ i) {
        if(nums[i] < pivotValue) {
            std::swap(nums[storeIndex], nums[i]);
            storeIndex ++;
        }
    }
    std::swap(nums[right], nums[storeIndex]);
    return storeIndex;
}
