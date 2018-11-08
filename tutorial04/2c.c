#include <stdio.h>

int main() {
  int z = 2, c;
  
  while (z <= 1000) {
    c = 2; 
    while (c < z) {
      if (z % c == 0) 
        c = 1005;
      c = c + 1;
    }
    if (c <= z) 
      printf(" %d", z); 
    z = z + 1;
  }
  
  return 0;
}
