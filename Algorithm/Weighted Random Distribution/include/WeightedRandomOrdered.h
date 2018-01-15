#ifndef WEIGHTEDRANDOMORDERED_H
#define WEIGHTEDRANDOMORDERED_H

#include <vector>
#include <map>
#include <cstdlib>
#include <iostream>

class WeightedRandomOrdered
{
    public:
        WeightedRandomOrdered();
        virtual ~WeightedRandomOrdered();
        void createRandomModel(std::vector< std::pair< int, int > > items);
        int getRandom();
    protected:
    private:
        int range;
        std::map< int, int > dstr;
};

#endif // WEIGHTEDRANDOMORDERED_H
