#include "List.h"
#include <iostream>

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
	if (size == 0)
	{
		head = front;
		tail = head;
		size++;
	}
	else
	{
		front->next = head;
		head = front;
		size++;
	}
}

//pop front method
//checks if value is 0, if it is, returns nullptr aka empty
//creates temp head value and points head to null if 1
//else temp = head, head is nullptr, reduce size

Node* List::pop_front(void)
{
	if (size == 0)
	{
		cout << "list is empty";
		return nullptr;
	}
	
	else if (size == 1)
	{
		//node point to temp = heads pointed location
		Node* temp = head;
		//head = next node
		//head = head->next;
		//head = tail = null due to the size being 0
		head = tail = nullptr;
		//reduce size
		size = 0;
		//temp = next empty pointer
		temp->next = nullptr;
		return temp;

	}else{
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
	
}

//pushback method
//head equals end, tail equals head, else, tail 
void List::push_back(Node* end)
{
	if (size == 0)
	{
		head = end;
		tail = head;
		size++;
	}
	else
	{
		tail->next = end;
		tail = end;
		size++;
		tail->next = nullptr;
	}

	// function that takes a Node* as 
	//a parameter and adds the node pointed 
	//to by the pointer to the end of the list. 

}

Node* List::pop_back(void)
{
	

	if (size == 0)
	{
		cout << "list is empty";
		return nullptr;
	}
	else if (size == 1)
	{
		//node point to temp = heads pointed location
		Node* temp = tail;
		//head = next node
		//head = head->next;
		//head = tail = null due to the size being 0
		head = tail = nullptr;

		//reduce size
		size = 0;
		//temp = next empty pointer
		temp->next = nullptr;
		return temp;

	} else {
		Node* temp = tail;
		Node* current = head;
		//head = next node
		
		while (current->next != tail)
		{
			current = current->next;
			//reduce size
			//temp = next empty pointer
		}
		size--;
		tail = current;
		current->next = nullptr;
		return temp;
	}
	//A pop_back function that removes 
	//the last node from the list, and returns 
	//a pointer to this node. Important, do not 
	//delete the node in this function. Simply unlink 
	//it from the list. File(s) to Submit: 
	//node point to temp = heads pointed location
}

Node* List::getFirst(void)
{
	return head;
}

Node* List::getLast(void)
{
	return tail;
}

int List::getSize(void)
{
	return size;
}
