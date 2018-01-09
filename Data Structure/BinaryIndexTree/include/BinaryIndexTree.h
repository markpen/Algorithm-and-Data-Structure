#ifndef BINARYINDEXTREE_H
#define BINARYINDEXTREE_H

#include<vector>

class BinaryIndexTree
{
    public:
        BinaryIndexTree();
        virtual ~BinaryIndexTree();
        void update(int i, int val);
        int sumRange(int i, int j);
    protected:
    private:
        std::vector<int> sums;
        std::vector<int> nums;
        int lowBits(int x);
        void add(int x, int val);
        int sum(int x);
        int sum(int left, int right);
};

#endif // BINARYINDEXTREE_H
