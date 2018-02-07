#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <cassert>
#include <cstring>
#include <string>

class HashTable
{
    public:
        HashTable();
        virtual ~HashTable();
        virtual bool searchKey(int key);
        virtual void insertKey(int key);
        virtual void insertKeyValue(int key, int val);
        virtual void deleteKey(int key);
    protected:
        unsigned hashFaction(std::string s);
    private:
};

#endif // HASHTABLE_H
