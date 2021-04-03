#include <stdlib.h>

#include "../headers/Node.h"

/*************************************************************
* CREATE NODE
* @author Lucas Bittencourt
* 
* Creates a Node from an AVL Tree, which will have its data,
* the height that represents how far the node is from the root,
* and the stub for a left and a right child.
*
* @param data is the information stored on the Node
* @param leftChild is the child node left-side of the Node
* @param rightChild is the child node right-side of the Node
* @param height is how far the node is from the root
* @return the Node allocated on memory
* ***********************************************************/

Node* CreateNode(int data) {
  Node* node = (Node*) malloc(sizeof(Node));
  node->data = data;
  node->leftChild = NULL;
  node->rightChild = NULL;
  node->height = 1;
  return node;
}
