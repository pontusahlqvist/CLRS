#include "HashTable.h"
HashTable::HashTable(int s){
	size = s;
	count = 0;
	T = new Node*[size];
	for(int i = 0; i < size; i++){
		T[i] = 0;
	}
}
HashTable::~HashTable(){
	freeMemory();
}

void HashTable::insert(int k){
	Node* newNode = new Node(k);
	int h = hash(k);
	Node* head = T[h];
	newNode->next = head;
	if(head){
		head->prev = newNode;
	}
	T[h] = newNode;
	count++;
}

void HashTable::remove(Node* n){
	if(!n){
		return;
	}
	if(n->next){
		n->next->prev = n->prev;
	}
	if(n->prev){
		n->prev->next = n->next;
	} else{
		//this is the head of this list, so we must also update T[n->key]
		T[hash(n->key)] = n->next;
	}
	freeNode(n);
	count--;
}

Node* HashTable::search(int k){
	int h = hash(k);
	Node* n = T[h];
	while(n && n->key != k){
		n = n->next;
	}
	return n;
}

//private methods
void HashTable::freeNode(Node* n){
	delete n;
}

//could make more elegant by using the list class I already wrote and just call delete[] T since this would invoke the destructor of each list elements automatically.
void HashTable::freeMemory(){
	for(int i = 0; i < size; i++){
		Node* n = T[i];
		while(n){
			Node* nextNode = n->next;
			freeNode(n);
			n = nextNode;
		}
	}
	delete[] T;
}

int HashTable::hash(int k){
	return k%size;
}
