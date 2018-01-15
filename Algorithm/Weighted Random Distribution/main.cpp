#include <iostream>
#include <vector>
#include <cstdlib>
#include <map>
#include "WeightedRandomExpanding.h"
#include "WeightedRandomOrdered.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    // generate distribution;
    std::vector< pair < int, int > > items;
    for(int i = 0; i < 10; ++ i) {
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

    return 0;
}
