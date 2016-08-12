#include "Node.h"
Node::Node(int k){
	key = k;
	next = 0;
	prev = 0;
}
int Node::getKey(){
	return key;
}
