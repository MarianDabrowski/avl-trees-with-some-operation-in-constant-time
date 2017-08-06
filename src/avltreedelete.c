#include "avltreedelete.h"

void deleteNode(AVLTree *avltree, int value)
{
    Node *node = findNode(avltree, value), *successor = NULL, *child, *parent;
    if(node) {
        // convert to a case with 1 or 0 child
        if(node->left && node->right) {
            // min max, successor and predecessor won't change
            successor = node->successor;
            node->data = successor->data;
            node = successor;
        }

        parent = node->parent;

        // redirecting successor and predecessor
        if(node->predecessor) node->predecessor->successor = node->successor;
        if(node->successor) node->successor->predecessor = node->predecessor;

        // case that node is root
        if(parent == NULL) {
            if((node->left == NULL) || (node->right == NULL)) avltree->root = NULL;
            else if(node->left) avltree->root = node->left;
            else avltree->root = node->right;
            child = avltree->root;
        }
        else {
            // left case
            if(node == parent->left) {

                if (node->left == NULL && node->right == NULL) {
                    parent->minimum = parent;
                    parent->left = NULL;
                    child = parent;
                } else if (node->left) {
                    parent->left = node->left;
                    parent->left->parent = parent;
                    child = parent->left;
                } else {
                    parent->minimum = node->right->minimum;
                    parent->left = node->right;
                    parent->left->parent = parent;
                    child = parent->left;
                }
            }
                // right case
            else {
                if(node->left == NULL && node->right == NULL) {
                    parent->maximum = parent;
                    parent->right = NULL;
                    child = parent;
                }
                else if(node->left) {
                    parent->maximum = node->left->maximum;
                    parent->right = node->left;
                    parent->right->parent = parent;
                    child = parent->right;
                }
                else {
                    parent->right = node->right;
                    parent->right->parent = parent;
                    child = parent->right;
                }
            }
        }
        free(node);
        balance(avltree, child);
        correctMinimumAndMaximum(child);
    }
}
