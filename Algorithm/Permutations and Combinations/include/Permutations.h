#ifndef PERMUTATIONS_H
#define PERMUTATIONS_H

#include <vector>

class Permutations
{
    public:
        Permutations();
        virtual ~Permutations();
        bool nextPermutation(std::vector< int >& nums);
    protected:
    private:
        void swap(int& a, int& b);
};

#endif // PERMUTATIONS_H
