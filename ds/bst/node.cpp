#include "node.h"
#include "log.h"
#include <iostream>


void init_node(Node& n, int v)
{
	n.key = v;
	n.left = NULL;
	n.right = NULL;
}

void insert_node(Node& n, int v)
{
	if (n.key < v) {
		if (n.right == NULL)
		{
			Node* right = new Node();
			init_node(*right, v);
			n.right = right;
		} else {
			insert_node(*n.right, v);
		}
	} else {
		if (n.left == NULL) {
			Node* left = new Node();
			init_node(*left, v);
			n.left = left;
		} else {
			insert_node(*n.left, v);
		}
	}
}

bool search(Node& n, int t)
{
	if (n.key < t) {
		if (n.right == NULL)
			return false;
		return search(*n.right, t);
	} else if (n.key > t) {
		if (n.left == NULL)
			return false;
		return search(*n.left, t);
	}

	return true;
}

