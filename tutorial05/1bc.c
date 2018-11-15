#include <stdio.h>

int g(int n){
  if (n == 0) 
    return 0;
  return n - g(g(n-1));
}

int m(int);

int f(int n){
  if (n == 0)
    return 1;
  return n - m(f(n-1));
}

int m(int n){
  if (n == 0)
    return 0;
  return n - f(m(n-1));
}

int main(){
  for (int x = 0; x < 20; x = x+1)
    printf("g(%d) = %d | f(%d) = %d | m(%d) = %d \n", x, g(x), x, f(x), x, g(x));
  printf("\n");
  return 0;
}
