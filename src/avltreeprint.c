#include "avltreeprint.h"

void printTreePLR(Node *node)
{
    if(node) {
        printNode(node);
        printTreePLR(node->left);
        printTreePLR(node->right);
    }
    else printNode(node);
}

void printAVLTreePLR(AVLTree *avltree)
{
    printTreePLR(avltree->root);
    printf("############################################################\n");
}

void printTreeFromFirstPredecessor(AVLTree *avltree)
{
    Node *iterator = avltree->root->minimum;
    while(iterator) {
        printf("%d\n",iterator->data);
        iterator = iterator->successor;
    }
}

void printTreeFromLastPredecessor(AVLTree *avltree)
{
    Node *iterator = avltree->root->maximum;
    while(iterator) {
        printf("%d\n",iterator->data);
        iterator = iterator->predecessor;
    }
}