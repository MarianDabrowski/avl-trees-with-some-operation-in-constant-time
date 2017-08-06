#include "avltreeinsert.h"

void insertBST(AVLTree *avltree, Node *node)
{
    bool inserted = false;
    int leftHeight, rightHeight;
    Node *iterator = avltree->root;
    if(isEmpty(avltree)) avltree->root = node;
    else {
        while(!inserted) {
            setHeights(iterator, &leftHeight, &rightHeight);

            if(iterator->data < node->data) {
                if(iterator->maximum->data < node->data) iterator->maximum = node;
                iterator->height = max(leftHeight, rightHeight + 1) + 1;

                if(iterator->right) iterator = iterator->right;
                else {
                    iterator->right = node;
                    node->parent = iterator;
                    inserted = true;
                }
            }
            else if(iterator->data > node->data) {
                if(iterator->minimum->data > node->data) iterator->minimum = node;
                iterator->height = max(leftHeight + 1, rightHeight) + 1;

                if(iterator->left) iterator = iterator->left;
                else {
                    iterator->left = node;
                    node->parent = iterator;
                    inserted = true;
                }
            }
            else inserted = true;
        }
    }
}

void insert(AVLTree *avltree, int value)
{
    if(findNode(avltree, value) == NULL) {
        Node *node = newNode(value);
        insertBST(avltree, node);
        if(isInserted(avltree, node)) {
            setSuccessorAndPredecessor(node);
            balance(avltree, node);
        }
        else free(node);
    }
}

