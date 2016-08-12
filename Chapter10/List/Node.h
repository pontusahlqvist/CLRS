class Node{
	Node* next;
	Node* prev;
	int key;
	public:
		Node(int);
		friend class List;
};
