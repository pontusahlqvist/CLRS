class Node{
	Node* next;
	int key;
	public:
		Node(int);
		friend class Stack; //don't want other classes besides Stack to be able to change next pointer.
};
