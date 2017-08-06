/** @file
 * Interface of AVL tree definition and basic functions
 * @author Marian Dabrowski
 */

#ifndef __AVLTREEBASIC_H__
#define __AVLTREEBASIC_H__

#include "node.h"
#include <assert.h>

/**
  * Structure that represents the AVLTree
  */
typedef struct AVLTree {
    Node *root; ///< the node witch is the root of a tree
} AVLTree;

/**
 * Returns the maximum of two integers
 * @param[in] val1: integer
 * @param[in] val2: integer
 * @return the maximum of two integers
 */
static inline int max(int val1, int val2)
{
    if(val1 > val2) return val1;
    return val2;
}

/**
 * Constructs a new instance of a AVLTree
 * @return a new instance of a AVLTree
 */
static inline AVLTree *newAVLTree()
{
    AVLTree *avltree = malloc(sizeof(AVLTree));
    assert(avltree != NULL);
    avltree->root = NULL;
    return avltree;
}

/**
 * Checks if the AVLTree is empty
 * @param[in] avltree: a instance of a AVLTree
 * @return if the avltree is empty
 */
static inline bool isEmpty(AVLTree *avltree)
{
    return (avltree->root == NULL);
}

/**
 * Checks if a node was inserted into a AVLTree
 * @param[in] avltree: the AVLTree where we check if the node is inserted
 * @param[in] node: node that we check if it was inserted
 * @return if the node is inserted into this avltree
 */
static inline bool isInserted(AVLTree *avltree, Node *node)
{
    return ((avltree->root == node) || (node->parent));
}

/**
 * Sets the variables leftHeight and rightHeight with according heights of
 * nodes children
 * @param[in] node: node that heights we want to discover
 * @param[in] leftHeight: parameter where we save the left height
 * @param[in] rightHeight: parameter where we save the right height
 */
static inline void setHeights(Node *node, int *leftHeight, int *rightHeight)
{
    *leftHeight = 0;
    *rightHeight = 0;
    if(node->left) *leftHeight = node->left->height;
    if(node->right) *rightHeight = node->right->height;
}

/**
 * Sets the node height attribute correctly
 * @param[in] node: node which height is set
 */
static inline void setAccordingHeight(Node *node)
{
    if(node) {
        int leftHeight, rightHeight;
        setHeights(node, &leftHeight, &rightHeight);
        node->height = max(leftHeight, rightHeight) + 1;
    }
}

/**
 * Finds the pointer to a node
 * @param[in] avltree: the tree to look into
 * @param[in] value: the value to look for
 * @return the pointer to the node with value
 */
Node *findNode(AVLTree *avltree, int value);

/**
 * Sets nodes successor and predecessor accordingly
 * to the inorder traversal
 * @param[in] node: node that successor and predecessor must be set
 */
void setSuccessorAndPredecessor(Node *node);

static inline void correctMinimumAndMaximum(Node *node)
{
    Node *iterator = node;
    while(iterator) {
        setMinimumAndMaximumNodes(iterator);
        iterator = iterator->parent;
    }
}


#endif /*__AVLTREEBASIC_H__*/
