#pragma once
#include "node.h";
class List
{
public:
	List();
	~List();
	List(Node*, Node*, int);
	Node pushFront(Node*);
	Node popFront(Node*);
	getFirst();
	getLast();
};

