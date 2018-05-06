#ifndef ROLLINGHASH_H
#define ROLLINGHASH_H

#include <vector>
#include <cstring>
#include <string>

class RollingHash
{
    public:
        RollingHash();
        virtual ~RollingHash();

        std::vector<int> getPatternIndex(std::string s, std::string pattern);

    protected:
    private:
        int pow(int x, int n, int mod);
};

#endif // ROLLINGHASH_H
