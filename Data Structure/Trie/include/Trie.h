#ifndef TRIE_H
#define TRIE_H

#include <string>

class Trie
{
    struct TrieNode {
        char c;
        bool isEnd;
        TrieNode* nextChar[26];
        TrieNode(char x) {
            this->c = x;
            this->isEnd = false;
            for(int i = 0; i < 26; ++ i) this->nextChar[i] = NULL;
        }
    };

    public:
        Trie();
        virtual ~Trie();

        void addWord(std::string word);
        bool searchWord(std::string word);
        bool startsWith(std::string prefix);

    protected:
    private:
        TrieNode* root;
        std::string toLow(std::string word);
        void deleteTrie(TrieNode* root);



};

#endif // TRIE_H
