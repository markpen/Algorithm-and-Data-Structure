#include "SegmentTree.h"

SegmentTree::SegmentTree()
{
    //ctor
}

SegmentTree::SegmentTree(std::vector<int>& nums) {
    assert(nums.size() != 0 && "At least one element.");
    std::vector<int> ini(nums.size() * 3);
    this->sums = ini;
    this->nums = nums;
    this->buildTree(0, nums, 0, nums.size() - 1);
}

SegmentTree::~SegmentTree()
{
    //dtor
}

void SegmentTree::buildTree(int root, std::vector<int>& nums, int left, int right) {
    if(left == right) {
        sums[root] = nums[left];
    } else {
        int mid = left + (right - left) / 2;
        buildTree(root * 2 + 1, nums, left, mid);
        buildTree(root * 2 + 2, nums, mid + 1, right);
        sums[root] = sums[root * 2 + 1] + sums[root  * 2 + 2];
    }

}

int SegmentTree::query(int root, int left, int right, int start, int end) {
    if(start > right || end < left) {
        return 0;
    } else if(start <= left && end >= right) {
        return sums[root];
    } else {
        int mid = left + (right - left) / 2;
        return query(root * 2 + 1, left, mid, start, end) +
               query(root * 2 + 2, mid + 1, right, start, end);
    }
}

int SegmentTree::sumRange(int left, int right) {
    return query(0, 0, nums.size() - 1, left, right);
}

void SegmentTree::increase(int root, int left, int right, int index, int val) {
    if(left == right) {
        if(index == left) sums[root] += val;
        return;
    } else {
        int mid = left + (right - left) / 2;
        if(index <= mid) increase(root * 2 + 1, left, mid, index, val);
        else increase(root * 2 + 2, mid + 1, right, index, val);
        sums[root] += val;
    }
}

void SegmentTree::update(int index, int val) {
    set(index, val);
}

void SegmentTree::set(int index, int val) {
    increase(index, val - nums[index]);
}

void SegmentTree::increase(int index, int val) {
    increase(0, 0, nums.size() - 1, index, val);
}
