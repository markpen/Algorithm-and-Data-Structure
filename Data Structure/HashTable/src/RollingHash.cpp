#include "RollingHash.h"

RollingHash::RollingHash()
{
    //ctor
}

RollingHash::~RollingHash()
{
    //dtor
}
std::vector<int> RollingHash::getPatternIndex(std::string s, std::string p) {
    std::vector<int> ans;
    if(p.length() > s.length()) return ans;

    int base = 256;
    int mod = 101;
    int ph = 0;
    for(auto x : p) {
        ph = ph * base % mod;
        ph = (ph + x) % mod;
    }

    int h = 0;
    int l = s.length();
    for(int i = 0; i < s.length(); ++ i) {
        if(i >= l) {
            h -= s[i - l] * pow(base, l - 1, mod);
        }

        h = h * base % mod;
        h = (h + s[i]) % mod;
        if(i >= l - 1) {
            if(ph == h) {
                ans.push_back(i - l + 1);
            }
        }
    }

    return ans;
}

int RollingHash::pow(int x, int n, int mod) {
    int ans = 1;
    while(n) {
        if(n % 2) {
            ans *= x;
            ans %= mod;
        }
        x *= x;
        x %= mod;
        n /= 2;
    }
    return ans;
}
