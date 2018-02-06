#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <vector>

class QuickSort
{
    public:
        QuickSort();
        virtual ~QuickSort();
        void qSort(std::vector<int>& nums);
    protected:
    private:
        void qSort(std::vector<int>& nums, int left, int right);
        int partition(std::vector<int>& nums, int left, int right, int index);
};

#endif // QUICKSORT_H
