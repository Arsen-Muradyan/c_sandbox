#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int age;
  char* info;
} record;

int main() {
  int num_recs = 2;
  record *recs;
  char str[] = "Simple info!";
  recs = calloc(num_recs, sizeof(record));
  if (recs != NULL) {
    for (int i = 0; i < num_recs; i++) {
      (recs+i)->age = i+20;
      (recs+i)->info = malloc(sizeof(str));
      strcpy((recs+i)->info, str);
    }
  }
  printf("%s\n", (recs+1)->info);
  return 0;
}