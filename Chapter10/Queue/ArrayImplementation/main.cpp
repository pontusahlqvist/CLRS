#include "Queue.h"
int main(){
	Queue q;
	q.printQueue();
	q.enqueue(4);
	q.printQueue();
	q.enqueue(5);
	q.printQueue();
	q.enqueue(1);
	q.printQueue();
	std::cout << "*** dequeue: " << q.dequeue() << " ***" << std::endl;
	q.printQueue();
	q.enqueue(3);
	q.printQueue();
	std::cout << "*** dequeue: " << q.dequeue() << " ***" << std::endl;
	q.printQueue();
	q.enqueue(8);
	q.printQueue();
	q.enqueue(7);
	q.printQueue();
	q.enqueue(0);
	q.printQueue();
	std::cout << "*** dequeue: " << q.dequeue() << " ***" << std::endl;
	q.printQueue();
	q.enqueue(9);
	q.printQueue();
	q.enqueue(1);
	q.printQueue();
	std::cout << "*** dequeue: " << q.dequeue() << " ***" << std::endl;
	q.printQueue();
	q.enqueue(4);
	q.printQueue();
	q.enqueue(2);
	q.printQueue();
	std::cout << "*** dequeue: " << q.dequeue() << " ***" << std::endl;
	q.printQueue();
	q.enqueue(6);
	return 0;
}
