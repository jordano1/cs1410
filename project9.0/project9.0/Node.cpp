#include "Node.h"
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

