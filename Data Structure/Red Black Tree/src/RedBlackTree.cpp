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

void RedBlackTree::insert(Node* root, Node* n) {
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

Node* RedBlackTree::insert(int x) {

}
