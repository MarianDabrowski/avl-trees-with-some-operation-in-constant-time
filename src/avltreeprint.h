/** @file
 * Interface of AVL tree printing to console as std output
 * @author Marian Dabrowski
 */

#ifndef __AVLTREEPRINT_H__
#define __AVLTREEPRINT_H__

#include "avltreebasic.h"

/**
 * Prints the avltree in preorder left right
 * @param[in] avltree: tree to be printed
 */
void printAVLTreePLR(AVLTree *avltree);

/**
 * Prints the node in preorder left right
 * @param[in] node: node to be printed
 */
void printTreePLR(Node *node);

/**
 * Prints all the values in avltree in a inorder left right
 * Just to see all value of the tree in a ascending order
 * @param[in] avltree: tree to be printed
 */
void printTreeFromFirstPredecessor(AVLTree *avltree);

/**
 * Prints all the values in avltree in a inorder right left
 * Just to see all value of the tree in a descending order
 * @param[in] avltree: tree to be printed
 */
void printTreeFromLastPredecessor(AVLTree *avltree);

#endif /*__AVLTREEPRINT_H__*/
