#include <stdio.h>

int main() {
  // Declaring Arrays Syntax
  int ages[5] = {10, 12, 36, 18, 25};
  float prices[5] = {12.5, 5.55, 6.99, 7.89, 10.99};
  // Accessing Array Element
  printf("The second element of ages is %d\n", ages[1]);
  // Changing Array Element
  prices[1] = prices[1]*2;
  printf("Changed of prices, %f\n", prices[1]);
  // Using loop with array
  for (int i = 0;  i < 5; i++) {
    printf("%d\n", ages[i]);
  }

  
  // Two Dimensional Array Example
  int matrix[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
  };
  // Getting two-dimensional Array element
  printf("Two Dimensional Array Element %d\n", matrix[1][1]);
  return 0;
}
