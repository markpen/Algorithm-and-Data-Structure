#ifndef LIST_H
#define LIST_H

#include <cstddef>

class List
{
    private:
    struct ListNode {
        int val;
        ListNode* next;
        ListNode* pre;
        ListNode(int x) {
            this->val = x;
            next = NULL;
            pre = NULL;
        }
    };

    public:
        List();
        virtual ~List();

        void push_back(int n);
        void push_front(int n);
        int getHead();
        int getTail();
        void pop_front();
        void pop_back();
        int getSize();
        bool isEmpty();
    protected:
    private:
        ListNode* head;
        ListNode* tail;
        int listSize;
        void deleteList();

};

#endif // LIST_H
