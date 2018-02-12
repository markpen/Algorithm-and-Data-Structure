#include <iostream>
#include <vector>
#include "BinarySearch.h"
#include "TripleSearch.h"
using namespace std;

double func(double x) {
    return x * x;
}

int main()
{
    BinarySearch bs;
    vector<int> nums = {1, 2, 3, 4, 4, 4, 4, 4, 5, 5, 5, 6, 6};
    cout << bs.binarySearch(nums, 7) << endl;
    cout << bs.binarySearch(nums, 3) << endl;
    cout << "Hello world!" << endl;
    cout << bs.firstIndex(nums, 4) << " : " << bs.lastIndex(nums, 4) << endl;
    cout << bs.firstIndex(nums, 6) << " : " << bs.lastIndex(nums, 6) << endl;

    TripleSearch ts;
    cout << ts.tripleSearch(func, -1.0, 1.0, 1e-5) << endl;

    return 0;
}
