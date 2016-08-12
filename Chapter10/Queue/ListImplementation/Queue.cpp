#include "Queue.h"
Queue::Queue(){
	head = 0;
	tail = 0;
	queueSize = 0;
}
Queue::~Queue(){}

void Queue::enqueue(int k){
	Node* newNode = new Node(k);
	newNode->prev = tail;
	if(tail){
		tail->next = newNode;
	}
	tail = newNode;
	if(!head){
		head = newNode;
	}
}

int Queue::dequeue(){
	Node* topNode = head;
	int k = topNode->key;
	head = head->next;
	freeNode(topNode);
	return k;
}

void Queue::printQueue(){
	std::cout << "Printing Queue:\n";
	Node* n = head;
	while(n){
		std::cout << n->key << " ";
		n = n->next;
	}
	std::cout << std::endl;
}

//private methods
void Queue::freeNode(Node* n){
	delete n;
}
void Queue::freeMemory(){
	Node* n = head;
	while(n){
		Node* nextNode = n->next;
		freeNode(n);
		n = nextNode;
	}
}
