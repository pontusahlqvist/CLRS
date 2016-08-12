#include "Node.h"
#include <iostream>
class Queue{
	Node* head;
	Node* tail;
	int queueSize;

	void freeNode(Node*);
	void freeMemory();
	public:
		Queue();
		~Queue();
		void enqueue(int);
		int dequeue();
		void printQueue();
};
