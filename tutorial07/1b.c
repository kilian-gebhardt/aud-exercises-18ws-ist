#include <stdio.h>

typedef struct node *tree;
typedef struct node { int key; tree left, right; } node;

#include "print_tree.h"

int main() {
	tree t1 = mktree(2, mkleaf(1), mkleaf(0));
	tree t2 = mkleaf(1);
	tree t3 = NULL;

	printTree(t1);
	printTree(t2);
	printTree(t3);
	return 0;
}
