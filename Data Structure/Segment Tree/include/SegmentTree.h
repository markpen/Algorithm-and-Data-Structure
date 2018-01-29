#ifndef SEGMENTTREE_H
#define SEGMENTTREE_H

#include <vector>
#include <cassert>

class SegmentTree
{
    public:
        SegmentTree();
        SegmentTree(std::vector<int>& nums);
        virtual ~SegmentTree();

        void update(int index, int val);
        void set(int index, int val);
        void increase(int index, int val);
        int sumRange(int left, int right);

    protected:
    private:
        std::vector<int> sums;
        std::vector<int> nums;
        void buildTree(int root, std::vector<int>& nums, int left, int right);
        int query(int root, int left, int right, int start, int end);
        void increase(int root, int left, int right, int index, int val);
};

#endif // SEGMENTTREE_H
