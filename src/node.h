/** @file
 * Interface of Node that provides following operations in O(1) time:
 * the maximum minimum value in the tree beneath the node
 * the successor and the predecessor in inorder traversal
 * @author Marian Dabrowski
 */

#ifndef __NODE_H__
#define __NODE_H__

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

/**
  * Structure that represents the Node
  */
typedef struct Node {
    int data; ///< piece of data that the node contains
    int height; ///< node height
    struct Node *left; ///< left child of node
    struct Node *right; ///< right child of node
    struct Node *parent; ///< parent of node
	struct Node *maximum; ///< node within the sub tree with maximum value
	struct Node *minimum; ///< node within the sub tree with minimum value
	struct Node *successor; ///< inorder successor of node
	struct Node *predecessor; ///< inorder predecessor of node
} Node;

/**
 * Constructs a new instance of a node
 * @param[in] data: piece of data of the new instance of a node
 * @return new Node instance
 */
Node *newNode(int data);

/**
 * Get the successor value of a node
 * @param[in] node: node that successor value we want
 * @return the successor value in the node or -1 if the successor is empty
 */
static inline int getSuccesorData(Node *node)
{
    int value = -1;
    if(node->successor) value = node->successor->data;
    return  value;
}

/**
 * Get the predecessor value of a node
 * @param[in] node: node that predecessor value we want
 * @return the predecessor value in the node or -1 if the predecessor is empty
 */
static inline int getPredecessorData(Node *node)
{
    int value = -1;
    if(node->predecessor) value = node->predecessor->data;
    return  value;
}

/**
 * Get the minimum value in the node and its tree beneath
 * @param[in] node: node that minimum value we want
 * @return the minimum value in the node or tree or -1 if the node is empty
 */
static inline int getMinimumData(Node *node)
{
    int value = -1;
    if(node) value = node->minimum->data;
    return value;
}

/**
 * Get the maximum value in the node and its tree beneath
 * @param[in] node: node that maximum value we want
 * @return the maximum value in the node or tree or -1 if the node is empty
 */
static inline int getMaximumData(Node *node)
{
    int value = -1;
    if(node) value = node->maximum->data;
    return value;
}

/**
 * Prints the properties of a node to console as std output
 * @param[in] node: the node which properties will be printed
 */
static inline void printNode(Node *node)
{
	if(node) printf("Node: {Value: %d, height %d, predecessor: %d, successor: %d, minimum: %d, maximum %d}\n", node->data, node->height, getPredecessorData(node), getSuccesorData(node), getMinimumData(node), getMaximumData(node));
	else printf("Node: {NULL, 0}\n");
}

/**
 * Gets the node with the smallest data value beneath the node or in node
 * @param[in] node: node to be looked for the minimum
 * @return the minimum node
 */
static inline Node *getMinimumNode(Node *node)
{
    Node *minimumNode = NULL;
    if(node) minimumNode = node->minimum;
    return minimumNode;
}

/**
 * Gets the node with the largest data value beneath the node or in node
 * @param[in] node: node to be looked for the maximum
 * @return the maximum node
 */
static inline Node *getMaximumNode(Node *node)
{
    Node *maximumNode = NULL;
    if(node) maximumNode = node->maximum;
    return maximumNode;
}

/**
 *  Sets minimum and maximum of a node
 * @param[in] node: node that minimum and maximum are to be set
 */
static inline void setMinimumAndMaximumNodes(Node *node)
{
    if(node) {
        if(node->right) node->maximum = node->right->maximum;
        else node->maximum = node;
        if(node->left) node->minimum = node->left->minimum;
        else node->minimum = node;
    }
}

#endif /*__NODE_H__*/