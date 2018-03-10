#ifndef PRIMERANDOM_H
#define PRIMERANDOM_H

#include <RandomGenerator.h>


class PrimeRandom : public RandomGenerator
{
    public:
        PrimeRandom();
        virtual ~PrimeRandom();
        int random();
    protected:
    private:
        int seed;
};

#endif // PRIMERANDOM_H
