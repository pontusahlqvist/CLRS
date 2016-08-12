#include "List.h"
//public methods

List::List(){
	head = 0;
}
List::~List(){
	freeMemory();
}

void List::insert(int k){
	Node* newNode = new Node(k);
	newNode->next = head;
	if(head){
		head->prev = newNode;
	}
	head = newNode;
}

void List::remove(Node* n){
	if(!n){
		return;
	}
	if(n->next){
		n->next->prev = n->prev;
	}
	if(n->prev){
		n->prev->next = n->next;
	} else{
		head = n->next;
	}
	freeNode(n);
}

Node* List::search(int k){
	Node* n = head;
	while(n && n->key != k){
		n = n->next;
	}
	return n;
}

void List::printList(){
	Node* n = head;
	std::cout << "Printing List:\n";
	while(n){
		std::cout << n->key << " ";
		n = n->next;
	}
	std::cout << std::endl;
}

//private methods
void List::freeNode(Node* n){
	delete n;
}

void List::freeMemory(){
	Node* n = head;
	while(n){
		Node* nextNode = n->next;
		freeNode(n);
		n = nextNode;
	}
}





