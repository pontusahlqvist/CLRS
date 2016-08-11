#include "Stack.h"
int main(){
	Stack s;
	s.printStack();
	s.push(4);
	s.printStack();
	s.push(7);
	s.printStack();
	s.push(1);
	s.printStack();
	std::cout << "*** Pop: " << s.pop() << " ***" << std::endl;
	s.printStack();
	s.push(9);
	s.printStack();
	std::cout << "*** Pop: " << s.pop() << " ***" << std::endl;
	s.printStack();
	s.push(5);
	s.printStack();
	std::cout << "*** Pop: " << s.pop() << " ***" << std::endl;
	s.printStack();
	s.push(0);
	s.printStack();
	s.push(1);
	s.printStack();
	s.push(10);
	s.printStack();
	s.push(5);
	s.printStack();
	s.push(4);
	s.printStack();
	s.push(6);
	s.printStack();
	s.push(2);
	s.printStack();
	return 0;
}
