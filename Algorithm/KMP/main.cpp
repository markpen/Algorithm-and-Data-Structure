#include <iostream>
#include <cstring>
#include "KMP.h"

using namespace std;

int main()
{
    std::string s = " ABC ABCDAB ABCDABCDABDE";
    std::string w = "ABCDABD";
    KMP kmp;
    cout << kmp.match(s, w) << endl;
    cout << "Hello world!" << endl;
    return 0;
}
