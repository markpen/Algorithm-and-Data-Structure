#include <iostream>
#include "Trie.h"
#include <vector>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    vector<string> words = {"shfisf", "shifhsahf", "shifaish", "shfisfdsf", "wieytioytr"};
    vector<string> findWords = {"qtyiowyet", "wietui", "shfisf", "shfisfdsf"};
    vector<string> findPrefix = {"wyiwyuet", "yqwteytry", "shf", "shfisfd"};
    Trie trie;
    for(auto x: words) trie.addWord(x);
    for(auto x: findWords) cout << trie.searchWord(x) << endl;
    cout << endl;
    for(auto x: findPrefix) cout << trie.startsWith(x) << endl;

    return 0;
}
