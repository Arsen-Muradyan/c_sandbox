#include <stdio.h>

int main() {
  // getchar
  /*
    printf("Write An Character: ");
    char a = getchar();
    printf("Char: %c\n", a);
  */
  // fgets
  /*
    printf("Enter String: ");
    char b[100];
    fgets(b, 100, stdin);
    printf("You Entered %s\n", b);
  */
  int a, b;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  printf("Sum of %d and %d is %d\n", a, b, a+b);
  return 0;
}