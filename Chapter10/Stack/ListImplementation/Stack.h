#include "Node.h"
#include <iostream>
class Stack{
  Node* head;
  int stackSize;

	void freeNode(Node*);
  void freeMemory();
  void incrementSize();
  void decrementSize();
  public:
    Stack();
    ~Stack();
    void push(int);
    int pop();
    bool isEmpty();
    int size();
    void printStack();
};
