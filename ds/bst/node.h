#ifndef NODE_H
#define NODE_H

struct Node {
	int key;
	Node* left;
	Node* right;
};

void init_node(Node& n, int v);
void insert_node(Node& n, int v);

#endif
