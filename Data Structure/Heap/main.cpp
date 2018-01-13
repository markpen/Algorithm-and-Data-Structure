#include <iostream>
#include <vector>
#include "Heap.h"

using namespace std;

int main()
{
    std::vector < int > nums = {1, 6, 3, 4, 5, 6};
    Heap h;
    h.createHeap(nums);
    for(int i = 0; i < nums.size(); ++ i) {
        cout << h.peek() << endl;
        h.pop();
    }
    cout << "Hello world!" << endl;
    return 0;
}
