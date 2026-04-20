#include "pes.h"
#include <stdio.h>
int tree_from_index(ObjectID *id);
int main() {
  ObjectID id;
  printf("Attempting to write tree...\n");
  if (tree_from_index(&id) == 0) {
    printf("Function returned SUCCESS\n");
  } else {
    printf("Function returned FAILURE\n");
  }
  return 0;
}