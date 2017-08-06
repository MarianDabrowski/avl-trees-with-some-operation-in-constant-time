#include "node.h"

Node *newNode(int data)
{
 	Node *node = malloc(sizeof(Node));
 	if(node == NULL) exit(1);

 	node->data = data;
 	node->height = 1;
 	node->left = NULL;
 	node->right = NULL;
 	node->parent = NULL;
	node->predecessor = NULL;
	node->successor = NULL;
	node->maximum = node;
	node->minimum = node;

 	return node;
}