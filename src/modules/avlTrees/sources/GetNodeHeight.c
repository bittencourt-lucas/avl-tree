#include <stdlib.h>

#include "../headers/Node.h"

/*************************************************************
* GET NODE HEIGHT
* @author Lucas Bittencourt
* 
* Returns the height of a Node.
*
* @param node is a Node
* @return the height of a Node
* ***********************************************************/

int GetNodeHeight(Node* node) {
  return (node) ? node->height : 0;
}
