#include "Stack.h"
//public methods
Stack::Stack(){
	head = 0;
	stackSize = 0;
}
Stack::~Stack(){
	freeMemory();
}
void Stack::push(int k){
	Node* n = new Node(k);
	n->next = head;
	head = n;
}

int Stack::pop(){
	Node* topNode = head;
	int k = topNode->key;
	head = topNode->next;
	freeNode(topNode);
	return k;
}

bool Stack::isEmpty(){
	return size() == 0;
}

int Stack::size(){
	return stackSize;
}

void Stack::printStack(){
	Node* n = head;
	while(n){
		std::cout << n->key << " ";
		n = n->next;
	}
	std::cout << std::endl;
}

//private methods
void Stack::freeNode(Node* n){
	delete n;
}
void Stack::freeMemory(){
	Node* n = head;
	while(n){
		Node* next = n->next;
		freeNode(n);
		n = next;
	}	
}
void Stack::incrementSize(){
	stackSize += 1;
}
void Stack::decrementSize(){
	stackSize -= 1;
}




