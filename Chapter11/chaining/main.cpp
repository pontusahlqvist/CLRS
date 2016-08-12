#include "HashTable.h"
#include <iostream>
int main(){
	HashTable h(5); //size = 5. Since we're inserting more than five items, the load factor > 1.
	h.insert(5);
	h.insert(4);
	h.insert(3);
	h.insert(1);
	h.insert(8);
	h.insert(4);
	h.insert(0);
	h.insert(2);
	Node* n = h.search(4);
	if(n){
		std::cout << "found element with value " << n->getKey() << std::endl; 
	} else{
		std::cout << "didn't find element" << std::endl;
	}
	h.remove(h.search(4));
	n = h.search(4);
	if(n){
		std::cout << "found element with value " << n->getKey() << std::endl; 
	} else{
		std::cout << "didn't find element" << std::endl;
	}
	h.remove(h.search(4));
	n = h.search(4);
	if(n){
		std::cout << "found element with value " << n->getKey() << std::endl; 
	} else{
		std::cout << "didn't find element" << std::endl;
	}
	
	return 0;
}
