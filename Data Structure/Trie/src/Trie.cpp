#include "Trie.h"

Trie::Trie()
{
    this->root = new TrieNode('0');
    //ctor
}

// this is memory leak, you need to delete very node you new
Trie::~Trie()
{
    this->deleteTrie(this->root);
    //dtor
}

// change to lowercase
std::string Trie::toLow(std::string word) {
    for(auto& x: word) if(x >= 'A' && x <= 'Z') x = 'a' + (x - 'A');

    return word;
}

// add a word into  the trie
void Trie::addWord(std::string word) {
    word = this->toLow(word);

    TrieNode* next = this->root;
    for(auto& x: word) {
        if(next->nextChar[x - 'a'] == NULL) next->nextChar[x - 'a'] = new TrieNode(x);
        next = next->nextChar[x - 'a'];
    }
    next->isEnd = true;
}

// find if a word in the trie
bool Trie::searchWord(std::string word) {
    word = this->toLow(word);

    TrieNode* next = this->root;
    for(auto& x: word) {
        if(next->nextChar[x - 'a'] != NULL) next = next->nextChar[x - 'a'];
        else return false;
    }

    return next->isEnd;
}

// find if a prefix is in the trie
bool Trie::startsWith(std::string prefix) {
    prefix = this->toLow(prefix);

    TrieNode* next = this->root;
    for(auto& x: prefix) {
        if(next->nextChar[x - 'a'] != NULL) next = next->nextChar[x - 'a'];
        else return false;
    }

    return true;
}

// delete TrieNode
void Trie::deleteTrie(TrieNode* root) {
    for(int i = 0; i < 26; ++ i) if(root->nextChar[i] != NULL) deleteTrie(root->nextChar[i]);
    delete root;
}
