#include "node.h"
#include "log.h"

int main()
{
	Node node;
	init_node(node, 3);
	insert_node(node,5);
	insert_node(node,1);
	insert_node(node,10);
	insert_node(node,2);

	log_tree(node);
	log_search_test();

	return 0;
}

