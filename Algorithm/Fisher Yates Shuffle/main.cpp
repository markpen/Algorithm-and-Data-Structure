#include <iostream>
#include "FisherYatesShuffle.h"
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 3, 4, 4, 4, 4, 5, 6, 8};
    FisherYatesShuffle fys(nums);
    while(fys.hasNext()) {
        cout << fys.getNext() << endl;
    }
    cout << "Hello world!" << endl;
    return 0;
}
