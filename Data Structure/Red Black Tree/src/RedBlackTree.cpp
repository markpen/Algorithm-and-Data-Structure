#include "RedBlackTree.h"

RedBlackTree::RedBlackTree()
{
    //ctor
}

RedBlackTree::~RedBlackTree()
{
    //dtor
}

Node* RedBlackTree::getParent(Node* n) {
    return n->parent;
}

Node* RedBlackTree::getGrandparent(Node* n) {
    return getParent(n) == NULL ? NULL : getParent(getParent(n));
}

Node* RedBlackTree::getSibling(Node* n) {
    Node* parent = getParent(n);
    if(parent == NULL) {
        return NULL;
    } else {
        if(n == parent->left) return parent->right;
        else return parent->left;
    }
}

Node* RedBlackTree::getUncle(Node* n) {
    Node* parent = getParent(n);
    Node* grandparent = getGrandparent(n);
    if(grandparent == NULL) return NULL;
    else return getSibling(parent);
}

void RedBlackTree::rotateLeft(Node* n) {
    Node* oldRight = n->right;
    n->right = oldRight->left;
    oldRight->left = n;
    oldRight->parent = n->parent;
    n->parent = oldRight;
}

void RedBlackTree::rotateRight(Node* n) {
    Node* oldLeft = n->left;
    n->left = oldLeft->right;
    oldLeft->right = n;
    oldLeft->parent = n->parent;
    n->parent = oldLeft;
}

void RedBlackTree::insertRecurse(Node* root, Node* n) {
    if(root != NULL && n->key < root->key) {
        if(root->left != LEAF) {
            insert(root->left, n);
            return;
        } else {
            root->left = n;
        }
    } else if(root != NULL){
        if(root->right != LEAF) {
            insert(root->right, n);
            return;
        } else {
            root->right = n;
        }
    }

    n->parent = root;
    n->left = LEAF;
    n->right = LEAF;
    n->color = RED;
}

Node* RedBlackTree::insert(Node* root, Node* n) {

    // insert new node into the current tree
    insertRecurse(root, n);

    //repair the tree in case any of the red-black propeties have been violated
    insertRepairTree(n);

    // find the new root to return
    root = n;
    while(getParent(root) != NULL) {
        root = getParent(root);
    }
    return root;
}

void RedBlackTree::insertRepairTree(Node* n) {
    if(parent(n) == NULL) {
        insertCas1(n);
    } else if(getParent(n)->color == BLACK) {
        insertCase2(n);
    } else if(getUncle(n)->color == RED) {
        insertCase3(n);
    } else {
        insertCase4(n);
    }
}

void RedBlackTree::insertCase1(Node* n) {
    if(getParent(n) == NULL) {
        n->color = BLACK;
    }
}

void RedBlackTree::insertCase2(Node* n) {
    return;
}

void RedBlackTree::insertCase3(Node* n) {
    getParent(n)->color = BLACK;
    getUncle(n)->color = BLACK;
    getGrandparent(n)->color = RED;
    insertRepairTree(getGrandparent(n));
}

void RedBlackTree::insertCase4(Node* n) {
    Node* parent = getParent(n);
    Node* grandparent = getGrandparent(n);

    if(n == grandparent->left->right) {
        rotateLeft(parent);
        n = n->left;
    } else if(n == grandparent->right->left) {
        rotateRight(parent);
        n = n->right;
    }

    insertCase4Step2(n);
}

void RedBlackTree::insertCase4Step2(Node* n) {
    Node* parent = getParent(n);
    Node* grandparent = getGrandparent(n);

    if(n == parent->left) {
        rotateRight(grandparent);
    } else {
        rotateRight(grandparent);
    }

    parent->color = BLACK;
    grandparent->color = RED;
}
