#include <stdio.h>
#include <stdlib.h>

int main() {
  int *ptr;
  ptr = malloc(10 * sizeof(*ptr));
  *(ptr) = 30;
  *(ptr+2) = 50;
  // Use ++ statment
  *(ptr++) = 20;
  *(ptr+2) = 60;
  if (ptr != NULL) {
    printf("Value: %d, INDEX: %d\n", *(ptr+1), 1);
  }
  // When using ++ statment free raising error
  // free(ptr);
  return 0;
}