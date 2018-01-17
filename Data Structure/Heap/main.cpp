#include <iostream>
#include <vector>

#include "BinaryHeap.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    vector< int > nums = {1, 6, 3, 4, 5, 6, 5, 1, 1, 1, 1, 1};
    BinaryHeap bh;
    bh.createHeap(nums);
    while(bh.isEmpty() == false) {
        cout << bh.peek() << endl;
        bh.pop();
    }

    return 0;
}
