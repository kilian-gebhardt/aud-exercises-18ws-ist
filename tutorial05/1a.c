#include <stdio.h>

int fib(int n) {
  if (n == 0 || n == 1)
    return 1;
  else
    return fib(n-1) + fib(n-2);
}

int main(){
  for (int x = 0; x < 20; x = x+1)
    printf(" %d", fib(x));
  printf("\n");
  return 0;
}
