#include "FisherYatesShuffle.h"

FisherYatesShuffle::FisherYatesShuffle()
{
    //ctor
}

FisherYatesShuffle::~FisherYatesShuffle()
{
    //dtor
}

FisherYatesShuffle::FisherYatesShuffle(std::vector<int>& a) {
    cards = a;
}

bool FisherYatesShuffle::hasNext() {
    return !cards.empty();
}

int FisherYatesShuffle::getNext() {
    int index = rand() % (int)cards.size();
    int next = cards[index];
    std::swap(cards[index], cards[cards.size() - 1]);
    cards.pop_back();
    return next;
}
