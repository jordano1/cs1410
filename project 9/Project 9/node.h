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

Node::Node() {
	getBook = nullptr;
	next = nullptr;
}
Node::Node(Book* foo) {
	getBook = foo;
	next = nullptr;
}

Node* Node::getNextNode(void)
{
	return next;
}

