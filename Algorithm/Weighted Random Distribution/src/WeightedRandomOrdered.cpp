#include "WeightedRandomOrdered.h"

WeightedRandomOrdered::WeightedRandomOrdered()
{
    //ctor
}

WeightedRandomOrdered::~WeightedRandomOrdered()
{
    //dtor
}

void WeightedRandomOrdered::createRandomModel(std::vector< std::pair< int, int > > items) {
    range = 0;
    for(auto x : items) {
        range += x.second;
        dstr[range - 1] = x.first;
    }

    //for(auto x : dstr) std::cout << x.first << " <-> " << x.second << std::endl;
}

int WeightedRandomOrdered::getRandom() {
    //int r = rand() % range;
    //std::cout << r << " -> ";
    auto ans = dstr.lower_bound(rand() % range);
    return ans == dstr.end() ? dstr.begin()->second : ans->second;
}
