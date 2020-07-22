#include <stdio.h>

int main() {
  int x = 18;
  float y = 11.6;
  char c = 'a';
  void *ptr;
  ptr = &x;
  printf("void ptr points to %d\n", *((int*)ptr));
  ptr = &y;
  printf("void ptr points to %f\n", *((float *)ptr));
  ptr = &c;
  printf("void ptr points to %c\n", *((char *)ptr));
  return 0;
}