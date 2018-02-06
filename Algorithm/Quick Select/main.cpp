#include <iostream>
#include "QuickSelect.h"
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    vector<int> nums;
    QuickSelect qs;
    for(int i = 0; i < 10; i ++) {
        nums.push_back(rand() % 10);
        cout << nums.back() << " ";
    }
    cout << endl;
    cout << qs.select(nums, 5) << endl;
    sort(nums.begin(), nums.end());
    for(auto x : nums) cout << x << " ";
    cout << endl;

    return 0;
}
