#ifndef WEIGHTEDRANDOMRESERVOIRSAMPLE_H
#define WEIGHTEDRANDOMRESERVOIRSAMPLE_H

#include <vector>
#include <algorithm>
#include <queue>
#include <unordered_set>
#include <cmath>
#include <iostream>

struct SampleItem {
    int id;
    int weight;
    double p;
    SampleItem(int ID, int Weight, double P) {
        id = ID;
        weight = Weight;
        p = P;
    }

};

struct cmp {
    bool operator() (SampleItem a, SampleItem b) {
        return a.p > b.p;
    }
};

class WeightedRandomReservoirSample
{
    public:
        WeightedRandomReservoirSample();
        virtual ~WeightedRandomReservoirSample();
        void setSize(int size);
        void getOne(int id, int weight);
        std::vector<int> getSample();
    protected:
    private:
        int size;
        int total;
        std::priority_queue<SampleItem, std::vector<SampleItem>, cmp> keep;
        std::unordered_set<int> mark;

};

#endif // WEIGHTEDRANDOMRESERVOIRSAMPLE_H
