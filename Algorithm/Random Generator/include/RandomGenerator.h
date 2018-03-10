#ifndef RANDOMGENERATOR_H
#define RANDOMGENERATOR_H


class RandomGenerator
{
    public:
        RandomGenerator();
        virtual ~RandomGenerator();
        virtual int random() = 0;
    protected:
    private:
};

#endif // RANDOMGENERATOR_H
