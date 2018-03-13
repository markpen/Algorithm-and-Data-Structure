#ifndef AC_H
#define AC_H

#include <vector>
#include <queue>
#include <cstdlib>
#include <string>
struct Node {
    std::vector<Node*> next;
    Node* fail;
    char c;
    bool isEnd;
    Node(char C) {
        c = C;
        next = std::vector<Node*>(26, NULL);
        fail = NULL;
        isEnd = false;
    }
};

class AC
{
    public:
        AC();
        virtual ~AC();
        void build(std::vector<std::string> words);
        std::vector<int> find(std::string s);
    protected:
    private:
        void add(std::string word);
        Node* root;
        void failPointer();
};

#endif // AC_H
