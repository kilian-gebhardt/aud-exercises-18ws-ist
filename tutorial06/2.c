#include <stdio.h>

typedef struct elem* list;
struct elem {
	int value;
	list next;
};

#include "print_list.h"

int sum_rec(list l) {
  if (l == NULL) // Liste ist leer
    return 0;
  // if (l->next == NULL)
  //  return l->value;
  else
    return l->value + sum_rec(l->next);
}

int sum_it(list l) {
  int i = 0;
  while (l != NULL) {
    i = i + l->value;
    l = l->next;
  }
  return i;
}

void rmEvens_rec(list * lp){
  if (*lp == NULL) // leere Liste
    return;
  list l = *lp;
  if (l->value % 2 == 0)  { // (*lp)->value %2 == 0
    *lp = l->next;
    free(l);
    rmEvens_rec(lp);
  } else {
    rmEvens_rec(&(l->next));
  }
}

void rmEvens_it2(list* lp) {
  while (*lp != NULL) {
    list l = *lp;
    if (l->value %2 == 0) {
      *lp = l->next;
      free(l);
      //
    } else {
      lp = &(l->next);
    }
  }
}


list rmEvens_it(list l){
  list previous = NULL, new_start = l;
  while (l != NULL) {
    if (l->value % 2 == 0) {
      if (previous == NULL) {
        new_start = l->next;
        l = l->next;
      } else {
        previous->next = l->next;
        l = l->next;
      }
    } else {
      previous = l;
      l = l->next;
    }
  }
    return new_start;
}


int main() {
	list l = cons(1, cons(2, cons(3, cons(4, cons(5, NULL)))));
	printList(l);
	printf("Summe (rec): %d / (it): %d\n", sum_rec(l), sum_it(l));
	printf("Summe (rec): %d / (it): %d\n", sum_rec(NULL), sum_it(NULL));
	rmEvens_rec(&l);
	printList(l);
	l = cons(1, cons(2, cons(3, cons(4, cons(5, NULL)))));
	l = rmEvens_it(l);
	printList(l);
	
	l = cons(1, cons(2, cons(3, cons(4, cons(5, NULL)))));
	rmEvens_it2(&l);
	printList(l);
	
	return 0;
	
	
	
}



