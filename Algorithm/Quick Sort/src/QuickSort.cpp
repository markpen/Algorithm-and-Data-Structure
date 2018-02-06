#include "QuickSort.h"

QuickSort::QuickSort()
{
    //ctor
}

QuickSort::~QuickSort()
{
    //dtor
}

void QuickSort::qSort(std::vector<int>& nums) {
    qSort(nums, 0, nums.size() - 1);
}

void QuickSort::qSort(std::vector<int>& nums, int left, int right) {
    if(left >= right) return;

    int mid = left + (right - left) / 2;
    int index = partition(nums, left, right, mid);
    qSort(nums, left, index - 1);
    qSort(nums, index + 1, right);
}

int QuickSort::partition(std::vector<int>& nums, int left, int right, int index) {
    int indexValue = nums[index];
    std::swap(nums[right], nums[index]);
    int storeIndex = left;
    for(int i = left; i < right; ++ i) {
        if(nums[i] < indexValue) {
            std::swap(nums[i], nums[storeIndex]);
            storeIndex ++;
        }
    }
    std::swap(nums[storeIndex], nums[right]);
    return storeIndex;
}
