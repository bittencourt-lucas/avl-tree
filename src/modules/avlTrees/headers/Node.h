#ifndef NODE_H_
#define NODE_H_

typedef struct Node {
  int data;
  struct Node* leftChild;
  struct Node* rightChild;
  int height;
} Node;

#endif /* NODE_H_ */
