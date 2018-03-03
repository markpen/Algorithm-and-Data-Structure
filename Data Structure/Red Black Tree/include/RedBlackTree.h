#ifndef REDBLACKTREE_H
#define REDBLACKTREE_H

#define RED 1
#define BLACK 0
#define LEAF NULL

struct Node {
    Node* parent;
    Node* left;
    Node* right;
    bool color;
    int key;
    Node(int v) {
        key = v;
        left = NULL;
        right = NULL;
        parent = NULL;
    }
    Node(int v, Node* root) {
        key = v;
        left = NULL;
        right = NULL;
        parent = root;
    }
};

class RedBlackTree
{
    public:
        RedBlackTree();
        virtual ~RedBlackTree();
        Node* insert(int x);
        void remove(int x);
        int size();

    protected:
    private:
        Node* getParent(Node* n);
        Node* getGrandparent(Node* n);
        Node* getSibling(Node* n);
        Node* getUncle(Node* n);

        void rotateLeft(Node* n);
        void rotateRight(Node* n);

        void insertRecurse(Node* root, Node* n);
        Node*insert(Node* root, Node* n);
        void insertRepairTree(Node* n);
        void insertCase1(Node* n);
        void insertCase2(Node* n);
        void insertCase3(Node* n);
        void insertCase4(Node* n);
        void insertCase4Step2(Node* n);

        Node* root;
};

#endif // REDBLACKTREE_H
