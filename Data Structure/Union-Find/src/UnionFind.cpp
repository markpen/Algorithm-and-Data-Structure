#include "UnionFind.h"

UnionFind::UnionFind()
{
    // initial with 1000 slots
    int n = 0;
    while(n < 1001) mark.push_back(n ++), size.push_back(1);
    //n = 0;
    //while(n < 100) std::cout << mark[n ++] << std::endl;
    //ctor
}

UnionFind::~UnionFind()
{
    //dtor
}

// find the root of x, and path compression
int UnionFind::find(int x) {
    return mark[x] == x ? x : mark[x] = find(mark[x]);
}

// union A and B, the root with more children become root.
void UnionFind::unionTwo(int a, int b) {
    int rootA = find(a);
    int rootB = find(b);
    if(size[rootA] > size[rootB]) {
        mark[rootB] = rootA;
        size[rootA] += size[rootB];
    } else {
        mark[rootA] = rootB;
        size[rootB] += size[rootA];
    }
}

// for debug
void UnionFind::print() {
    int n = 0;
    while(n < 100) std::cout << mark[n ++] << std::endl;
}
