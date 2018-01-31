#ifndef KMP_H
#define KMP_H

#include <vector>
#include <string>

class KMP
{
    public:
        KMP();
        virtual ~KMP();
        bool match(std::string s, std::string w);
        std::vector<int> matchPositions(std::string s, std::string w);
        int firstMatchPosition(std::string s, std::string w);
    protected:
    private:
        std::vector<int> patternTable(std::string w);
};

// reference: https://en.wikipedia.org/wiki/Knuth%E2%80%93Morris%E2%80%93Pratt_algorithm

#endif // KMP_H
