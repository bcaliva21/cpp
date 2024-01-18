#include "node.h"
#include <iostream>

void log_node(Node& n)
{
	int key = n.key;
	std::cout << "Key: " << key << '\n';
	std::cout << "Left: " << n.left << '\n';
	std::cout << "Right: " << n.right << '\n';
}

void log_tree(Node& n)
{
	log_node(n);
	if (n.left != NULL)
		log_tree(*n.left);
	if (n.right != NULL)
		log_tree(*n.right);
}

void log_search_test()
{
	Node* n = new Node();

	init_node(*n, 100);
	insert_node(*n, 150);
	insert_node(*n, 420);
	insert_node(*n, 50);
	insert_node(*n, 25);
	insert_node(*n, 30);

	std::cout << "Expect: true\nActual: " <<  std::boolalpha << search(*n, 30) << '\n';
	std::cout << "Expect: true\nActual: " <<  std::boolalpha << search(*n, 420) << '\n';
	std::cout << "Expect: false\nActual: " << std::boolalpha << search(*n, 20) << '\n';
}

