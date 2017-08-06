/** @file
 * Interface of AVL tree deletion function
 * @author Marian Dabrowski
 */

#ifndef __AVLTREEDELETE_H__
#define __AVLTREEDELETE_H__

#include "avltreebasic.h"
#include "avltreebalance.h"


/**
 * Deletes a value of a tree
 * @param[in] avltree: the tree where we want to delete the value
 * @param[in] value: the value we want to delete
 */
void deleteNode(AVLTree *avltree, int value);

#endif /*__AVLTREEDELETE_H__*/
