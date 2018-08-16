#pragma once
#include "book.h"
struct Node
{
	Node();
	Node(Book* Book);
	Node* next;
	Node* getNextNode(void);
	Book* getBook;
};
