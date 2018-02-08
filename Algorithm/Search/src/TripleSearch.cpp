#include "TripleSearch.h"

TripleSearch::TripleSearch()
{
    //ctor
}

TripleSearch::~TripleSearch()
{
    //dtor
}

// given a function with one peak within the range left to right, find the minimum vaule within the precision
double TripleSearch::tripleSearch(double (*func)(double), double left, double right, double precision) {
    while(right - left > precision) {
        double newLeft = left + (right - left) / 3;
        double newRight = left + (right - left) / 3 * 2;
        if(func(newLeft) > func(newRight)) left = newLeft;
        else right = newRight;
    }
    return left;
}
