#include <iostream>

#include "PrimeRandom.h"

using namespace std;



int main()
{
    PrimeRandom pr;
    int n = 10;
    while(n --) cout << pr.random() << endl;
    cout << "Hello world!" << endl;
    return 0;
}
