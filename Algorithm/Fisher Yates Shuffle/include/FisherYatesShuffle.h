#ifndef FISHERYATESSHUFFLE_H
#define FISHERYATESSHUFFLE_H

#include <vector>
#include <algorithm>

class FisherYatesShuffle
{
    public:
        FisherYatesShuffle();
        FisherYatesShuffle(std::vector<int>& a);
        virtual ~FisherYatesShuffle();
        bool hasNext();
        int getNext();
    protected:
    private:
        std::vector<int> cards;
};

#endif // FISHERYATESSHUFFLE_H
