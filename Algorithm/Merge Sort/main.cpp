#include <iostream>
#include "MergeSort.h"
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    vector<int> nums;
    vector<int> checked;
    for(int i = 0; i < 1000; i ++) {
        int n = rand() %10000;
        nums.push_back(n);
        checked.push_back(n);
    }

    MergeSort m;
    m.simpleMergeSort(nums);
    std::sort(checked.begin(), checked.end());
    for(int i = 0; i < nums.size(); ++ i) {
        if(checked[i] != nums[i]) cout << checked[i] << " : " << nums[i] << endl;
    }
    return 0;
}
