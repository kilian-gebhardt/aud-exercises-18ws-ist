#include <stdio.h>

int main(){
  int i, a = 1;
  printf("Bitte Zahl eingeben: ");
  scanf("%i", &i);
  
  while (i > 0) {
    a = a * i;
    i = i - 1;
  }
  
  printf("%d\n", a);
  
  return 0;
}
