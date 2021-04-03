#include <stdlib.h>

#include "../headers/BinaryTree.h"
#include "../headers/Node.h"

/*************************************************************
* CREATE AVL TREE
* @author Lucas Bittencourt
* 
* Creates the AVL Tree by receiving its root Node.
*
* @param root is the Node that will serve as the root
* @return the AVL Tree allocated on memory
* ***********************************************************/

BinaryTree* CreateAVLTree(Node* root) {
  BinaryTree* tree = (BinaryTree*) malloc(sizeof(BinaryTree));
  tree->root = root;
  return tree;
}
