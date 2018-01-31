#include "KMP.h"

KMP::KMP()
{
    //ctor
}

KMP::~KMP()
{
    //dtor
}


bool KMP::match(std::string s, std::string w) {

    std::vector<int> t = patternTable( w);

    int m = 0, i = 0;
    while(m + i < s.length()) {
        if(w[i] == s[m + i]) {
            if(i + 1 == w.length()) {
                return true;
            } else {
                i ++;
            }
        } else {
            if(t[i] > -1) {
                m = m + i - t[i];
                i = t[i];
            } else {
                m = m + i + 1;
                i = 0;
            }
        }
    }
    return false;
}

std::vector<int> KMP::patternTable(std::string w) {
    std::vector<int> t(w.length());
    t[0] = -1;
    int pos = 1, cnd = 0;
    while(pos < w.length()) {
        if(w[pos] == w[cnd]) {
            t[pos] = t[cnd];
            pos ++;
            cnd ++;
        } else {
            t[pos] = cnd;
            cnd = t[cnd];
            while(cnd >= 0 && w[pos] != cnd) {
                cnd = t[cnd];
            }
            pos ++;
            cnd ++;
        }
    }

    return t;
}
