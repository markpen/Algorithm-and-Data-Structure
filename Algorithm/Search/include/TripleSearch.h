#ifndef TRIPLESEARCH_H
#define TRIPLESEARCH_H

#include <Search.h>

class TripleSearch: public Search
{
    public:
        TripleSearch();
        virtual ~TripleSearch();
        double tripleSearch(double (*func)(double), double left, double right, double precision);
    protected:
    private:
};

#endif // TRIPLESEARCH_H
