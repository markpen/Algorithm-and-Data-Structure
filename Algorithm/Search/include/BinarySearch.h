#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include <Search.h>


class BinarySearch : public Search
{
    public:
        BinarySearch();
        virtual ~BinarySearch();
        bool binarySearch(std::vector<int>& nums, int k);
    protected:
    private:
};

#endif // BINARYSEARCH_H
