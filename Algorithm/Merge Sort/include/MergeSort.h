#ifndef MERGESORT_H
#define MERGESORT_H

#include <vector>

class MergeSort
{
    public:
        MergeSort();
        virtual ~MergeSort();
        void mergeSort(std::vector<int>& nums);
        void simpleMergeSort(std::vector < int >& nums);
    protected:
    private:
        void merge(std::vector<int>& a, std::vector<int>& b, int left, int mid, int right);
        void split(std::vector<int>& a, std::vector<int>& b, int left, int right);
        void mergeSort(std::vector < int >& nums, int left, int right, std::vector < int >& temp);
};

#endif // MERGESORT_H
