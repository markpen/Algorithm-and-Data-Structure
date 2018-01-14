#ifndef UNIONFIND_H
#define UNIONFIND_H

#include <vector>
#include <iostream>

class UnionFind
{
    public:
        UnionFind();
        virtual ~UnionFind();
        int find(int x);
        void unionTwo(int a, int b);
        void print();
    protected:
    private:
        std::vector<int> mark;
        std::vector<int> size;
};

#endif // UNIONFIND_H
