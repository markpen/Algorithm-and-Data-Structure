#ifndef COUNTONESINBINARYNUMBER_H
#define COUNTONESINBINARYNUMBER_H


class CountOnesInBinaryNumber
{
    public:
        CountOnesInBinaryNumber();
        virtual ~CountOnesInBinaryNumber();
        int countOnes(int x);
        int countOnes(long long x);
    protected:
    private:
        const long long m1 = 0x5555555555555555;
        const long long m2 = 0x3333333333333333;
        const long long m4 = 0x0f0f0f0f0f0f0f0f;
        const long long m8 = 0x00ff00ff00ff00ff;
        const long long m16 = 0x0000ffff0000ffff;
        const long long m32 = 0x00000000ffffffff;


};

#endif // COUNTONESINBINARYNUMBER_H
