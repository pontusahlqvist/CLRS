class Node{
	Node* next;
	Node* prev;
	int key;
	public:
		Node(int);
		int getKey();
		friend class HashTable;
};
