#include <stdlib.h>

#include "../headers/Node.h"

// Function Prototyping
int GetNodeHeight(Node* node);
int GetMaxInt(int a, int b);

/*************************************************************
* ROTATE RIGHT
* @author Lucas Bittencourt
* 
* Performs a right rotation on a subtree with the node root,
* then it updates all tree heights.
*
* @param node is a Node
* @return the rotated subtree
* ***********************************************************/

Node* RotateRight(Node* node) {
  Node* subtree = node->leftChild;
  Node* subtreeRightChild = subtree->rightChild;

  subtree->rightChild = node;
  node->leftChild = subtreeRightChild;

  node->height = GetMaxInt(
                    GetNodeHeight(node->leftChild),
                    GetNodeHeight(node->rightChild))
                 + 1;
  subtree->height = GetMaxInt(
                      GetNodeHeight(subtree->leftChild),
                      GetNodeHeight(subtree->rightChild))
                    + 1;

  return nodeLeftChild;
}
