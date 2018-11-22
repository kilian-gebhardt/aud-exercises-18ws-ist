#include <stdio.h>

typedef struct node* tree;
struct node {
	int key;
	tree left, right;
};

#include "print_tree.h"


int main() {
	tree s = mktree(2, mktree(3, mkleaf(2), mkleaf(4)), mkleaf(1));
	tree t = mktree(2, mkleaf(2), mkleaf(3));
	printf("s:\n"); printTree(s);
	printf("t:\n"); printTree(t);
}
