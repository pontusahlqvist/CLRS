#include "Node.h"
#include <iostream>
class HashTable{
	Node** T;
	int size;
	int count;
	int hash(int); //could make this virtual and abstract to faciliate inheritance
	void freeNode(Node*);
	void freeMemory();
	public:
		HashTable(int);
		~HashTable();
		void insert(int);
		void remove(Node*);
		Node* search(int);
};
