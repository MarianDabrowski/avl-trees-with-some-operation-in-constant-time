#include "avltreebasic.h"

void setSuccessorAndPredecessor(Node *node)
{
    Node *parent = node->parent;
    if(parent) {
        if(node == parent->left) {
            node->successor = parent;
            node->predecessor = parent->predecessor;
            parent->predecessor = node;
            if(node->predecessor) node->predecessor->successor = node;
        }
        else {
            node->predecessor = parent;
            node->successor = parent->successor;
            parent->successor = node;
            if(node->successor) node->successor->predecessor = node;
        }
    }
}

Node *findNode(AVLTree *avltree, int value)
{
    Node *node = NULL, *iterator = avltree->root;
    while(node == NULL && iterator) {
        if(iterator->data < value) iterator = iterator->right;
        else if(iterator->data > value) iterator = iterator->left;
        else node = iterator;
    }
    return node;
}