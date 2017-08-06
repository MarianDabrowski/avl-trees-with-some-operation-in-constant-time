#include "avltreebalance.h"

void rotateLeft(AVLTree *avltree, Node *node)
{
    if(node && node->right) {

        Node *temp = node->right;
        node->right = temp->left;
        temp->left = node;

        if(node->right) node->right->parent = node;
        temp->parent = node->parent;
        node->parent = temp;

        if(temp->parent) {
            if(node == temp->parent->left) temp->parent->left = temp;
            else temp->parent->right = temp;
        }
        else avltree->root = temp;

        // correcting the minimum and maximum
        temp->minimum = node->minimum;
        node->maximum = getMaximumNode(node->right);
        if(node->maximum == NULL) node->maximum = node;
    }
}

void rotateRight(AVLTree *avltree, Node *node)
{
    if(node && node->left) {
        Node *temp = node->left;
        node->left = temp->right;
        temp->right = node;

        if(node->left) node->left->parent = node;
        temp->parent = node->parent;
        node->parent = temp;

        if(temp->parent) {
            if(node == temp->parent->left) temp->parent->left = temp;
            else temp->parent->right = temp;
        }
        else avltree->root = temp;

        // correcting the minimum and maximum
        temp->maximum = node->maximum;
        node->minimum = getMinimumNode(node->left);
        if(node->minimum == NULL) node->minimum = node;
    }
}

void balance(AVLTree *avltree, Node *node)
{
    int leftHeight, rightHeight;

    while(node) {
        setHeights(node, &leftHeight, &rightHeight);
        // left case
        if(leftHeight - rightHeight > 1) {
            setHeights(node->left, &leftHeight, &rightHeight);
            // left right
            if(leftHeight < rightHeight) {
                rotateLeft(avltree, node->left);
                setAccordingHeight(node->left->left);
                setAccordingHeight(node->left);
            }
            // left left
            rotateRight(avltree, node);
            setAccordingHeight(node);
            setAccordingHeight(node->parent);
        }
            // right case
        else if(rightHeight - leftHeight > 1) {
            setHeights(node->right, &leftHeight, &rightHeight);
            // right left
            if(leftHeight > rightHeight) {
                rotateRight(avltree, node->right);
                setAccordingHeight(node->right->right);
                setAccordingHeight(node->right);
            }

            // right right
            rotateLeft(avltree, node);
            setAccordingHeight(node);
            setAccordingHeight(node->parent);

        }
        else setAccordingHeight(node);
        node = node->parent;
    }
}

