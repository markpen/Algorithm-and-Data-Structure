#ifndef QUICKSELECT_H
#define QUICKSELECT_H

#include <vector>
#include <cassert>

class QuickSelect
{
    public:
        QuickSelect();
        virtual ~QuickSelect();
        int select(std::vector<int>& nums, int k);
    protected:
    private:
        int partition(std::vector<int>& nums, int left, int right, int pivotIndex);
        int select(std::vector<int>& nums, int left, int right, int k);
};

#endif // QUICKSELECT_H
