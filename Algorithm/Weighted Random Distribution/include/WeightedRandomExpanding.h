#ifndef WEIGHTEDRANDOMEXPANDING_H
#define WEIGHTEDRANDOMEXPANDING_H

#include <vector>
#include <cstdlib>

/*
expending weighted random, fastest but requested huge memory, not recommended.
build model: O(N)
getRandom: O(1)
*/

class WeightedRandomExpanding
{
    public:
        WeightedRandomExpanding();
        virtual ~WeightedRandomExpanding();
        void createRandomModel(std::vector< std::pair < int, int > > items);
        int getRandom();
    protected:
    private:
        std::vector< int > dstr;
};

#endif // WEIGHTEDRANDOMEXPANDING_H
