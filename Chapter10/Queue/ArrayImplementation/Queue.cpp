#include "Queue.h"
Queue::Queue(){
	Q = new int;
	queueSize = 0;
	capacity = 1;
	head = 0;
	tail = 0;
}

Queue::~Queue(){
	freeMemory();
}

void Queue::doubleCapacity(){
	int* newQ = new int[2*capacity];
	for(int i = 0; i < size(); i++){
		newQ[i] = Q[(head+i)%capacity];
	}
	freeMemory();
	Q = newQ;
	capacity *= 2;
	head = 0;
	tail = size();
}

void Queue::freeMemory(){
	delete[] Q;
} 

int Queue::size(){
	return queueSize;
}

void Queue::enqueue(int k){
	if(size() == capacity){
		doubleCapacity();
	}
	Q[tail] = k;
	tail = (tail + 1)%capacity;
	incrementSize();
}

int Queue::dequeue(){ //at this point neglects underflow
	int toReturn = Q[head];
	head = (head + 1)%capacity;
	decrementSize();
	return toReturn;
}

void Queue::incrementSize(){
	queueSize += 1;
}

void Queue::decrementSize(){
	queueSize -= 1;
}

void Queue::printQueue(){
	std::cout << "Printing the queue:\n";
	for(int i = 0; i < size(); i++){
		std::cout << Q[(head + i)%capacity] << " ";
	}
	std::cout << std::endl;
}
