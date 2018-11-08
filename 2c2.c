#include <stdio.h>

int main() {
  int sieve[1001];
  
  for (int i = 2; i <= 1000; i = i + 1 ) {
    sieve[i] = 1;
  }
  
  for (int i = 2; i <= 1000; i = i + 1) {
    if (sieve[i] == 1) {
      printf(" %d", i); // ist Primzahl!
      if (i <= 40) {
        for (int v = 2 * i; v <= 1000 ; v = v + i) {
          sieve[v] = 0;
        }
      }
    }
  }
  
  return 0;
}
