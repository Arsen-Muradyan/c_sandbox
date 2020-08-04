#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr;
  ptr = malloc(10 * sizeof(int));
  *(ptr) = 30;
  *(ptr+2) = 50;
  // Use += statment
  *(ptr+=3) = 20;
  *(ptr+6) = 60;
  // Use Loop
  for (int i = 0; i < 10; i++) {
    printf("Value: %d, INDEX: %d\n", *(ptr+i), i);
  }
  free(ptr);
  return 0;
}