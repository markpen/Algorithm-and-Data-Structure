#include "BinarySearch.h"

BinarySearch::BinarySearch()
{
    //ctor
}

BinarySearch::~BinarySearch()
{
    //dtor
}

bool BinarySearch::binarySearch(std::vector<int>& nums, int k) {
    int left = 0;
    int right = nums.size() - 1;
    while(left < right) {
        int mid = left + (right - left) / 2;
        if(nums[mid] > k) right = mid;
        else if(nums[mid] < k) left = mid + 1;
        else return true;
    }
    return nums[left] == k;

}
