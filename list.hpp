#ifndef LIST_HPP
#define LIST_HPP
#include "node.hpp"
#include <iostream>
#include <string>

class List
{
	private:
		Node* head;
	public:
		List();
		std::string GetPrintableList();
                void InsertInOrder(int val);
                Node* GetNode(int searchKey);
                bool isEmpty() {return head == nullptr; }
};
#endif
