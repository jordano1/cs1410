#pragma once
#include "node.h";
class List
{
public:
	List();
	~List();
	void push_front(Node*);
	Node* pop_front(void);
	void push_back(Node*);
	Node* pop_back(void);
	Node* getFirst(void);
	Node* getLast(void);
private:
	Node* head;
	Node* tail;
	int size;
};

