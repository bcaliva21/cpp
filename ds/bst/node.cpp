#include "node.h"
#include <iostream>


void init_node(Node& n, int v)
{
	n.key = v;
	n.left = nullptr;
	n.right = nullptr;
}

void insert_node(Node& n, int v)
{
	if (n.key < v)
	{
		if (n.right == nullptr)
		{
			Node right;
			init_node(right, v);
			n.right = &right;
		} else {
			insert_node(*n.right, v);
		}
	} else {
		if (n.left == nullptr)
		{
			Node left;
			init_node(left, v);
			n.left = &left;
		} else {
			insert_node(*n.left, v);
		}
	}
}

