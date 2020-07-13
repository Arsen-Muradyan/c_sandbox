#include <stdio.h>


void say_hello();

int global1 = 0;

int main() {
  // local and global vairables
  int local1 = 10;
  int local2 = 25;
  global1 = local1+local1;
  printf("%d\n", global1);
  // Test static vairables
  for (int i = 0; i < 5; i++) {
    say_hello();
  }
   
  return 0; 
}
void say_hello() {
  static int num_calls = 1;
  printf("Hello number %d\n", num_calls);
  num_calls++;
}