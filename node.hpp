#ifndef NODE_HPP
#define NODE_HPP


class Node
{
	private:
		int data;
		Node* next;
	public:
		Node(int data, Node* nextNode = nullptr);
		int GetData();
                void SetNext(Node * p) {next = p; }
		Node* GetNext();
};
#endif
