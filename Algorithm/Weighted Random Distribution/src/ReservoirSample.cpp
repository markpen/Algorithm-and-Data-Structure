#include "ReservoirSample.h"

// reference: https://en.wikipedia.org/wiki/Reservoir_sampling

ReservoirSample::ReservoirSample()
{
    //ctor
}

ReservoirSample::~ReservoirSample()
{
    //dtor
}

void ReservoirSample::setSize(int size) {
    this->size = size;
    this->total = 0;
}

std::vector<int> ReservoirSample::getSample() {
    return ans;
}

void ReservoirSample::getOne(int x) {
    if(ans.size() < size) {
        ans.push_back(x);
        total ++;
    } else {
        int index = rand() % total;
        if(index < size) ans[index] = x;
    }
}
