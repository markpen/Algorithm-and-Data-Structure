#include <iostream>
#include "UnionFind.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    UnionFind uf;
    //uf.print();
    for(int i = 0; i < 100; i ++) { //cout << i << endl;
        uf.unionTwo(i, i + 1);
        //cout << uf.find(i) << " : " << uf.find(i + 1) << endl;
    }
    //uf.print();

    return 0;
}
