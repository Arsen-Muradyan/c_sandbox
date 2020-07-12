#include <stdio.h>

int main() {
  int age = 20;
  // If, Else
  if (age >= 16) printf("You Can Drink beer\n");
  else printf("You Can't Drink Beer\n");
  // ? conditional expression
  int y;
  int x = 3;

  y = (x >= 5) ? 5 : x;
  printf("%d\n", y);
  return 0; 
}