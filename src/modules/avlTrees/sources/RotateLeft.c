#include <stdlib.h>

#include "../headers/Node.h"

// Function Prototyping
int GetNodeHeight(Node* node);
int GetMaxInt(int a, int b);

/*************************************************************
* ROTATE LEFT
* @author Lucas Bittencourt
* 
* Performs a left rotation on a subtree with the node root,
* then it updates all tree heights.
*
* @param node is a Node
* @return the rotated subtree
* ***********************************************************/

Node* RotateLeft(Node* node) {
  Node* subtree = node->rightChild;
  Node* subtreeLeftChild = subtree->leftChild;

  subtree->leftChild = node;
  node->rightChild = subtreeLeftChild;

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
