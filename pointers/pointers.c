#include <stdio.h>

int main() {
  int x = 5;
  int y = 2;
  int *p = NULL;
  p = &x;
  y+=*p;
  *p*=2;
  (*p)++;
  printf("Value of x is %d\n", x); 
  return 0;
}