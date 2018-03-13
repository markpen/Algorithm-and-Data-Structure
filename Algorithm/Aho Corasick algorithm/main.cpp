#include <iostream>
#include "AC.h"
#include <vector>

using namespace std;

int main()
{

    vector<string> words = {"a", "b", "ab", "abc", "c"};
    AC ac;
    ac.build(words);
    auto ans = ac.find("abbabc");
    for(auto x : ans) cout << x << " ";
    cout << "Hello world!" << endl;
    return 0;
}
