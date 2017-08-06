#include "node.h"
#include "avltree.h"

int main(void)
{
	AVLTree *avltree = newAVLTree();
	int i, t;
	for(i = 1; i < 13; ++i) {
        t = rand() % 100;
        insert(avltree, t);

    }
    insert(avltree, 105);
    //insert(avltree, 45);
    //printf("\n##################\n");

	printAVLTreePLR(avltree);
    deleteNode(avltree, 105);
    deleteNode(avltree, 15);

    printAVLTreePLR(avltree);

    printf("INCREASING\n");
    printTreeFromFirstPredecessor(avltree);

    printf("DECREASING\n");
    printTreeFromLastPredecessor(avltree);


	//deleteNode(avltree, 83);
	//printAVLTreePLR(avltree);
    //printNode(avltree->root->left->right->right->predecessor);
    //printTreeFromFirstPredecessor(avltree->root);

	return 0;
}