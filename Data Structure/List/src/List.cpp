#include "List.h"

List::List()
{
    //ctor
    head = new ListNode(0);
    tail = head;
    listSize = 0;
}

List::~List()
{
    deleteList();
    //dtor
}

// add an element at the end
void List::push_back(int x) {
    tail->next = new ListNode(x);
    tail->next->pre = tail;
    tail = tail->next;
    listSize ++;
}

// add an element at head
void List::push_front(int x) {
    ListNode* tempHead = head->next;
    head->next = new ListNode(x);
    head->next->pre = head;
    head->next->next = tempHead;
    tempHead->pre = head->next;
    listSize ++;
}

// pop an element at end
void List::pop_back() {
    if(head->next != NULL) {
        tail = tail->pre;
        delete tail->next;
        tail->next = NULL;
        listSize --;
    }
}

// pop an element at head
void List::pop_front() {
    if(head->next != NULL) {
        ListNode* tempHead = head->next;
        head->next = tempHead->next;
        if(tempHead->next != NULL) tempHead->next->pre = head;
        else tail = head; // only have one element
        delete tempHead;
        listSize --;
    }
}

// get the length of list
int List::getSize() {
    return listSize;
}

// return if list is empty
bool List::isEmpty() {
    return listSize == 0;
}

// return head val of list
int List::getHead() {
    return head->next == NULL ? 0 : head->next->val;
}

// return tail val of list
int List::getTail() {
    return head == tail ? 0 : tail->val;
}

// delete the list
void List::deleteList() {
    while(tail->pre != NULL) {
        tail = tail->pre;
        delete tail->next;
    }
    delete tail;
}
