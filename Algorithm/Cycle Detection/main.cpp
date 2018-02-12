#include <iostream>
#include <vector>
#include "CycleDetection.h"

using namespace std;

int main()
{
    vector<int> table = {1, 2, 3, 4, 5};
    CycleDetection cd;
    cout << cd.hasCycle(table) << endl;
    vector<int> table2 = {1, 2, 3, 3};
    cout << cd.hasCycle(table2) << endl;
    cout << "Hello world!" << endl;
    return 0;
}
