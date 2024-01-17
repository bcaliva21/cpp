#include "node.h"
#include "log.h"
#include <iostream>

int main()
{
	Node node;
	init_node(node, 2);
	insert_node(node,5);
	insert_node(node,1);

	log_tree(node);

	return 0;
}

