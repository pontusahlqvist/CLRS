#include "Node.h"
#include <iostream>
class List{
	Node* head;
	void freeMemory();
	void freeNode(Node*);
	public:
		List();
		~List();
		void insert(int);
		void remove(Node*);
		Node* search(int);
		void printList();
};
