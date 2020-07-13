#include <stdio.h>

int fact(int num) {
  if (num == 1) return 1;
  else return fact(num-1)*num;
}

int main() {
  printf("Fact of 5 is %d\n", fact(5));
  return 0;
}