#include <iostream>
class Queue{
	int* Q;
	int head;
	int tail;
	int queueSize;
	int capacity;

	void doubleCapacity();
	void freeMemory();
	void incrementSize();
	void decrementSize();
	public:
		Queue();
		~Queue();
		void enqueue(int);
		int dequeue();
		void printQueue();
		int size();
};
