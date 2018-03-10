#include "PrimeRandom.h"

PrimeRandom::PrimeRandom()
{
    seed = 5;
    //ctor
}

PrimeRandom::~PrimeRandom()
{
    //dtor
}

int PrimeRandom::random() {
    return seed = (5 * seed + 7) % 10000007;
}
