#include "node.h"
#include <iostream>

using namespace std;

void log_node(Node& n)
{
	int key = n.key;
	cout << "Key: " << key << '\n';
	cout << "Left: " << n.left << '\n';
	cout << "Right: " << n.right << '\n';
}

void log_tree(Node& n)
{
	log_node(n);
	if (n.left != NULL)
		log_tree(*n.left);
	if (n.right != NULL)
		log_tree(*n.right);
}

