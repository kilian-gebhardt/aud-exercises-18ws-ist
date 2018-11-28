#include <stdio.h>

typedef struct element *list;
typedef struct element { int value; list next; } element;

#include "print_list.h"

int main() {
	list l_good = cons(1, cons(1, cons(2, cons(2, cons(3, NULL)))));
	list l_bad  = cons(1, cons(1, cons(3, cons(4, NULL))));
	printList(l_good);
	printList(l_bad);
	return 0;
}
