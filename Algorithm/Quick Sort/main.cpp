#include <iostream>
#include <vector>
#include <algorithm>
#include "QuickSort.h"

using namespace std;

int main()
{
    vector<int> nums;
    for(int i = 0; i < 10; ++ i) {
        nums.push_back(rand() % 10);
        cout << nums.back() << " ";
    }
    cout << endl;
    QuickSort qs;
    qs.qSort(nums);
    for(auto x : nums) cout << x << " ";
    cout << endl;


    cout << "Hello world!" << endl;
    return 0;
}
