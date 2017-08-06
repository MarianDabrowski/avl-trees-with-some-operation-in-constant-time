/** @file
 * Interface of AVL tree balancing function
 * @author Marian Dabrowski
 */

#ifndef __AVLTREEBALANCE_H__
#define __AVLTREEBALANCE_H__

#include "avltreebasic.h"


/**
 * Rotates the tree left in the node position
 * @param[in] avltree: tree to be rotated
 * @param[in] node: node to be rotated
 */
void rotateLeft(AVLTree *avltree, Node *node);

/**
 * Rotates the tree right in the node position
 * @param[in] avltree: tree to be rotated
 * @param[in] node: node to be rotated
 */
void rotateRight(AVLTree *avltree, Node *node);

/**
 * Restores the values of a AVLTree
 * @param[in] avltree: the avltree to be corrected
 * @param[in] node: node that was just inserted
 */
void balance(AVLTree *avltree, Node *node);

#endif /*__AVLTREEBALANCE_H__*/
