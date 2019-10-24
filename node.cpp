#include "node.hpp"
#include <string>

Node::Node(int data, Node* nextNode)
{
	this->data = data;
	this->next = nextNode;
}


int Node::GetData()
{
	return this->data;
}

Node* Node::GetNext()
{
	return this->next;
}

