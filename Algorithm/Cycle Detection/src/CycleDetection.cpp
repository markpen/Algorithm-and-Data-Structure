#include "CycleDetection.h"

CycleDetection::CycleDetection()
{
    //ctor
}

CycleDetection::~CycleDetection()
{
    //dtor
}


// table: table[i], there is an edge from i to table[i]
bool CycleDetection::hasCycle(std::vector<int>& table) {
    int slow = table[0];
    int fast = table[table[0]];
    while(slow != fast) {
        if(slow >= table.size() || fast >= table.size()) return false;
        slow = table[slow];
        fast = table[table[fast]];
    }
    return true;
}
