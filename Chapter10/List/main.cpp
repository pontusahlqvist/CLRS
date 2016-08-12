#include "List.h"
int main(){
	List l;
	l.printList();
	l.insert(1);
	l.printList();
	l.insert(3);
	l.printList();
	l.insert(2);
	l.printList();
	l.remove(l.search(3));
	l.printList();
	l.insert(7);
	l.printList();
	l.insert(4);
	l.printList();
	l.remove(l.search(10));
	l.printList();
	l.insert(2);
	l.printList();
	return 0;
}
