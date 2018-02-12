// reference: https://en.wikipedia.org/wiki/Cycle_detection

#ifndef CYCLEDETECTION_H
#define CYCLEDETECTION_H

#include <vector>

class CycleDetection
{
    public:
        CycleDetection();
        virtual ~CycleDetection();
        bool hasCycle(std::vector<int>& table);
    protected:
    private:
};

#endif // CYCLEDETECTION_H
