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

// find the first position of k in nums, if not found, return -1.
int BinarySearch::firstIndex(std::vector<int>& nums, int k) {
    if(nums.size() == 0) return -1;
    int left = 0, right = nums.size() - 1;
    while(left < right) {
        int mid = left + (right - left) / 2; // get floor
        if(nums[mid] >= k) right = mid;
        else left = mid + 1;
    }

    return nums[left] == k ? left : -1;
}

// find the last position of k in nums, if not found, return -1.
int BinarySearch::lastIndex(std::vector<int>& nums, int k) {
    if(nums.size() == 0) return -1;
    int left = 0, right = nums.size() - 1;
    while(left < right) {
        int mid = left + (right - left + 1) / 2; // get ceil
        if(nums[mid] > k) right = mid - 1;
        else left = mid;
    }

    return nums[left] == k ? left : -1;
}

