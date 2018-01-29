#include <iostream>
#include <vector>
#include "SegmentTree.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    std::vector<int> nums = {0, 2, 3, 4, 5, 6, 7, 8};
    SegmentTree st(nums);

    cout << st.sumRange(0, nums.size() - 1) << endl;
    st.increase(0, 10);
    cout << st.sumRange(0, nums.size() - 1) << endl;
    return 0;
}
