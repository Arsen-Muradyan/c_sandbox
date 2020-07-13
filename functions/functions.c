#include <stdio.h>

int square(int num);
int sum(int x, int y);
int main() {
  // Test Square function
  /*
    int x, result;
    x = 5;
    result = square(x);
    printf("Square of %d is %d\n", x, result);
  */
  // Test sum function
  int x, y, result;
  x = 10;
  y = 20;
  result = sum(x, y);
  printf("sum of %d and %d is %d\n", x, y, result);
  return 0;
}
int square(int num) {
  return num * num;
}
int sum(int x, int y) {
  x+=y;
  return(x);
}