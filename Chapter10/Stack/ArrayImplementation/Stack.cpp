#include "Stack.h"

Stack::Stack(){
	S = new int;
	stackSize = 0;
	capacity = 1;
	head = -1;
}

Stack::~Stack(){
	freeMemory();
}

void Stack::freeMemory(){
	delete[] S;
}

void Stack::doubleArray(){
	std::cout << "doubling array. Old capacity is " << capacity << std::endl;
	int* newS = new int[capacity*2];
	for(int i = 0; i < capacity; i++){
		newS[i] = S[i];
	}
	freeMemory();
	S = newS;	
	capacity *= 2;
	std::cout << "new capacity = " << capacity << std::endl;
}

bool Stack::isEmpty(){
	return size()==0;
}

int Stack::size(){
	return stackSize;
}

void Stack::incrementSize(){
	stackSize += 1;
}

void Stack::decrementSize(){
	stackSize -=1;
}

bool Stack::isFull(){
	return size() == capacity;
}

void Stack::push(int k){
	if(isFull()){
		doubleArray();
	}
	head += 1;
	S[head] = k;
	incrementSize();
}

int Stack::pop(){
	decrementSize();
	head -= 1;
	return S[head+1];
}

void Stack::printStack(){
	std::cout << "Printing Stack:\n";
	for(int i = 0; i < size(); i++){
		std::cout << S[i] << " ";
	}
	std::cout << std::endl;
}
