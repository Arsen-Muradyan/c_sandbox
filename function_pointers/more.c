#include <stdio.h>

int sum(int x, int y);
int div(int x, int y);
int mul(int x, int y);
int sub(int x, int y);

int main() {
  int (*op[4])(int, int);
  op[0] = sum;
  op[1] = div;
  op[2] = sub;
  op[3] = mul;
  printf("%d\n", op[0](1, 3));
  return 0;
}

int sum(int x, int y) {
  return x+y;
};
int div(int x, int y) {
  return x/y;
};
int mul(int x, int y) {
  return x*y;
};
int sub(int x, int y) {
  return x-y;
};
