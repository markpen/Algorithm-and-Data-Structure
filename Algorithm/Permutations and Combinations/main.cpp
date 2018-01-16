#include <iostream>
#include <vector>

#include "Permutations.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Permutations p;
    std::vector< int > nums;
    for(int i = 0; i < 4; ++ i) {
        nums.push_back(i);
    }
    do {
        for(auto x : nums) cout << x << " ";
        cout << endl;
    } while(p.nextPermutation(nums));

    return 0;
}
