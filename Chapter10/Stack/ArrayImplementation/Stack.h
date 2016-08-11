#include <iostream>
class Stack{
	int* S;
	int stackSize;
	int head;
	int capacity;
	void doubleArray();
	void freeMemory();
	bool isFull();
	void incrementSize();
	void decrementSize();
	public:
		Stack();
		~Stack();
		void push(int);
		int pop();
		bool isEmpty();
		int size();
		void printStack();
};
