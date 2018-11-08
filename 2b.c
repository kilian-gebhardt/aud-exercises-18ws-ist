#include <stdio.h>

int main() {
  int i, c = 1, f=1;
  printf("Bitte Zahl eingeben: ");
  scanf("%i", &i);
  
  while (f <= i) {
    while (c <= i) { 
      printf(" %4i\t", f * c);
      c = c + 1;
    }
    f = f + 1;
    c = 1;
    printf("\n");
  }
  
  return 0;
}
