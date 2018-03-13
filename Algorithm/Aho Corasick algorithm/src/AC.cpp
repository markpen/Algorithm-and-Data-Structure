#include "AC.h"

/*
reference:
https://en.wikipedia.org/wiki/Aho%E2%80%93Corasick_algorithm
http://blog.csdn.net/creatorx/article/details/71100840
*/

AC::AC()
{
    root = new Node('0');
    //ctor
}

AC::~AC()
{
    //dtor
}

void AC::add(std::string word) {
    Node* next = root;
    for(auto x : word) {
        if(next->next[x - 'a'] == NULL) next->next[x - 'a'] = new Node(x);
        next = next->next[x - 'a'];
    }
    next->isEnd = true;
}


void AC::build(std::vector<std::string> words) {
    // build trie
    for(auto x : words) add(x);

    //build fail pointer
    failPointer();
}

// bfs
void AC::failPointer() {
    std::queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        Node* tempNext = q.front();
        q.pop();
        for(int i = 0; i <tempNext->next.size(); i ++ ) {
            if(tempNext->next[i] != NULL) {
                if(tempNext == root) {
                    tempNext->next[i]->fail = root;
                } else {
                    Node* tempFail = tempNext->fail;
                    while(tempFail != NULL) {
                        if(tempFail->next[i] != NULL) {
                            tempNext->next[i]->fail = tempFail->next[i];
                            break;
                        }
                        tempFail = tempFail->fail;
                    }
                    if(tempFail == NULL) tempNext->next[i]->fail = root;
                }

                q.push(tempNext->next[i]);
            }
        }
    }
}

std::vector<int> AC::find(std::string s) {
    std::vector<int> ans;
    Node* next = root;
    for(int i = 0; i < s.length(); ++ i) {
        while(next != NULL && next->next[s[i] - 'a'] == NULL) next = next->fail;
        if(next != NULL) {
            Node* tempNext = next;
            next = next->next[s[i] - 'a'];
            while(tempNext != root) {
                if(tempNext->isEnd) {
                    ans.push_back(i);
                    break;
                } else {
                    tempNext = tempNext->fail;
                }
            }
        } else {
            next = root;
        }
    }

    return ans;
}
