#include "MergeSort.h"

MergeSort::MergeSort()
{
    //ctor
}

MergeSort::~MergeSort()
{
    //dtor
}

void MergeSort::mergeSort(std::vector<int>& nums) {
    std::vector<int> a = nums;
    split(a, nums, 0, nums.size() - 1);
}

void MergeSort::split(std::vector<int>& a, std::vector<int>& b, int left, int right) {
    if(left == right) return;

    int mid = left + (right - left) / 2;
    split(b, a, left, mid);
    split(b, a, mid + 1, right);
    merge(a, b, left, mid, right);
}

void MergeSort::merge(std::vector<int>& a, std::vector<int>& b, int left, int mid, int right) {
    int i = left, j = mid + 1;
    for(int k = left; k <= right; ++ k) {
        if(i <= mid && (j > right || a[i] < a[j])) b[k] = a[i ++];
        else b[k] = a[j ++];
    }
}

