#include "WeightedRandomReservoirSample.h"

// reference: https://en.wikipedia.org/wiki/Reservoir_sampling

WeightedRandomReservoirSample::WeightedRandomReservoirSample()
{
    //ctor
}

WeightedRandomReservoirSample::~WeightedRandomReservoirSample()
{
    //dtor
}

void WeightedRandomReservoirSample::setSize(int size) {
    this->size = size;
    this->total = 0;
}

std::vector<int> WeightedRandomReservoirSample::getSample() {
    std::vector<int> samples;
    for(auto x : mark) samples.push_back(x);
    return samples;
}

void WeightedRandomReservoirSample::getOne(int id, int weight) {
    //std::cout << "keep size: " << keep.size() <<  std::endl;
    double p = pow((double) rand() / (double)RAND_MAX, 1.0 / (double)weight);
    //for(auto x : mark) std::cout << x << " ";
    //std::cout << std::endl;
    SampleItem smp(id, weight, p);
    if(keep.size() < size) {
        keep.push(smp);
        mark.insert(id);
    } else {
        if(keep.top().p < p) {
            mark.erase(keep.top().id);
            keep.pop();
            keep.push(smp);
            mark.insert(id);
        }
    }
}


