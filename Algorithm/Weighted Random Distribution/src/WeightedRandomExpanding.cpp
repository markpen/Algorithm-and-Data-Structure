#include "WeightedRandomExpanding.h"

WeightedRandomExpanding::WeightedRandomExpanding()
{
    //ctor
}

WeightedRandomExpanding::~WeightedRandomExpanding()
{
    //dtor
}

void WeightedRandomExpanding::createRandomModel(std::vector < std::pair < int, int > > items) {
    for(auto x: items) {
        while(x.second --) dstr.push_back(x.first);
    }
}

int WeightedRandomExpanding::getRandom() {
    return dstr[rand() % dstr.size()];
}
