#include <stdio.h>
#include "linkedlist.h"

int main() {
  LinkedList list;
  init(&list);

  append(&list, 10);
  append(&list, 20);
  append(&list, 30);

  printf("Values in the list: ");
  for (int i = 0; i < getSize(&list); i++) {
    printf("%d ", get(&list, i));
  }
  printf("\n");

  set(&list, 1, 25);

  printf("Values in the list after setting index 1 to 25: ");
  for (int i = 0; i < getSize(&list); i++) {
    printf("%d ", get(&list, i));
  }
  printf("\n");

  cleanup(&list);

  return 0;
}