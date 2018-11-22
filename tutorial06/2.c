#include <stdio.h>

typedef struct elem* list;
struct elem {
	int value;
	list next;
};

#include "print_list.h"

int main() {
	list l = cons(1, cons(2, cons(3, cons(4, cons(5, NULL)))));
	printList(l);
	return 0;
}
