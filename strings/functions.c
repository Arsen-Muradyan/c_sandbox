#include <stdio.h>
#include <ctype.h>
int main() {
  // sprintf
  /*
    char info[100];
    char dept[] = "HR";
    int emp = 75;
    sprintf(info, "The %s has %d employees", dept, emp);
    printf("%s\n", info);  
  */
  // sscanf
  char info[] = "Snoqualmie WA 14000";
  char state[50];
  char city[50];
  int population;
  sscanf(info, "%s %s %d", city, state, &population);
  printf("%d people live in %s, %s.\n", population, city, state);

  return 0; 
}