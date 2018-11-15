#include <stdio.h>

void swap(int *x, int *y ) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void swap_alt(int * x, int * y){
  *x = *x + *y;
  *y = *x - *y;
  *x = *x - *y;
}

int main() {

  int a = 7, b = 7;
  
  swap_alt(&a, &b);
  
  printf("a = %d and b = %d\n", a, b);
  // a = 7 and b = 3
  
  return 0;
}
