#include "list.hpp"

List::List()
{
	this->head = nullptr;
}

std::string List::GetPrintableList()
{
	std::string printedList("");
	Node* currentNode = this->head;

	while (currentNode != nullptr)
	{
		printedList = printedList + std::to_string(currentNode->GetData()) + " -> ";
		currentNode = currentNode->GetNext();
	}

	printedList += "nullptr";
	return printedList;
}

Node* List::GetNode(int searchKey)
{
	Node* currentNode = this->head;

	while (currentNode != nullptr)
	{
		if (currentNode->GetData() == searchKey)
		{
			break;
		}
		currentNode = currentNode->GetNext();
	}

	return currentNode;
}



void List::InsertInOrder(int value)
{
  Node * current = head;
  Node * previous = nullptr;
  Node * newNode = new Node(value,nullptr);
  while(current != nullptr && current->GetData() < value)
  {
    previous = current;
    current = current->GetNext();
  }

  if(previous == nullptr)
  {
     newNode->SetNext(head);
     head = newNode;
  }
  else
  {
    previous->SetNext(newNode);
    newNode->SetNext(current); 
  }
}



