#include <stdio.h>
#include <string.h>
int main() {
  char city[10];
  printf("Enter your favourite city: ");
  fgets(city, 10, stdin);
  fputs(city, stdout);
  printf(" is fun city\n");
  return 0;
}