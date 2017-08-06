/** @file
 * Interface of AVL insertion functions
 * @author Marian Dabrowski
 */

#ifndef __AVLTREEINSERT_H__
#define __AVLTREEINSERT_H__

#include "avltreebasic.h"
#include "avltreebalance.h"

/**
 * Inserts as if into a BST tree
 * @param[in] avltree: tree into which the node is to be inserted
 * @param[in] node: node to be inserted
 */
void insertBST(AVLTree *avltree, Node *node);

/**
 * Inserts a node into a AVLTree
 * @param[in] avltree: the tree into which we want to insert
 * @paramp[in] value: value that we insert
 */
void insert(AVLTree *avltree, int value);

#endif /*__AVLTREEINSERT_H__*/
