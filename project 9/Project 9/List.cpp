#include "List.h"

List::List()
{
	head = nullptr;
	tail = nullptr;
	size = 0;
}


List::~List()
{
}


void List::push_front(Node* front)
{
	//next = next property of the node, could be nullptr or another node
	//text in nodes, would be the arrow
	front->next = head;
	head = front;
	size++;
}


Node* List::pop_front(void)
{
	//node point to temp = heads pointed location
	Node* temp = head;
	//head = next node
	head = head->next;
	//reduce size
	size--;
	//temp = next empty pointer
	temp->next = nullptr;
	return temp;
}


void List::push_back(Node* end) 
{
	end->next = tail;
	tail = end;
	size++;
	// function that takes a Node* as 
	//a parameter and adds the node pointed 
	//to by the pointer to the end of the list. 

}

Node* List::pop_back(void)
{
	//A pop_back function that removes 
	//the last node from the list, and returns 
	//a pointer to this node. Important, do not 
	//delete the node in this function. Simply unlink 
	//it from the list. File(s) to Submit: 
	//node point to temp = heads pointed location
	Node* temp = tail;
	//head = next node
	tail = tail->next;
	//reduce size
	size--;
	//temp = next empty pointer
	temp->next = nullptr;
	return tail;

}

Node* List::getFirst(void)
{
	return head;
}

Node* List::getLast(void)
{
	return tail;
}