#include <iostream>
#include <vector>
#include <cstdlib>
#include <map>
#include "WeightedRandomExpanding.h"
#include "WeightedRandomOrdered.h"
#include "ReservoirSample.h"
#include "WeightedRandomReservoirSample.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    // generate distribution;
    std::vector< pair < int, int > > items;
    for(int i = 0; i < 20; ++ i) {
        items.push_back(make_pair(i, rand() % 10));
    }

    // test
    //WeightedRandomExpanding wre;
    WeightedRandomOrdered wre;
    wre.createRandomModel(items);
    std::map< int, int > dis;
    for(int i = 0; i < 1000; i ++) {
        //int r = wre.getRandom();
        //std::cout << r << std::endl;
        dis[wre.getRandom()] ++;
    }

    for(auto x : items) cout << x.first << " : " << x.second << endl;

    cout << endl;

    for(auto x : dis) cout << x.first << " : " << x.second << endl;

    ReservoirSample rs;
    rs.setSize(5);
    vector<int> nums = {1,2 ,3, 4, 5, 6, 7, 8, 9};
    for(auto x : nums) rs.getOne(x);

    vector<int> ans = rs.getSample();
    for(auto x : ans) cout << x << " ";
    cout << endl;

    // test for weight random using reservoir sample
    cout << "Test for WeightedRandomReseroirSample:" << endl;
    WeightedRandomReservoirSample wrrs;
    wrrs.setSize(5);
    for(auto x : items) {
        wrrs.getOne(x.first, x.second);
    }
    vector<int> ansWrrs = wrrs.getSample();
    for(auto x : ansWrrs) cout << x << " ";
    cout << endl;

    return 0;
}
