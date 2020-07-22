#include <stdio.h>

void sayHello(int num);

int main() {
  void (*funptr)(int);
  funptr = sayHello;
  funptr(3);
  return 0;
}

void sayHello(int num) {
  for (int i = 0; i < num; i++) {
    printf("Hello\n");
  }
} 