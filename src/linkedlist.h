#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>

typedef struct Node {
  int value;
  struct Node *next;
} Node;

typedef struct {
  Node *head;
} LinkedList;

void init(LinkedList *list);
void append(LinkedList *list, int value);
int get(LinkedList *list, int index);
void set(LinkedList *list, int index, int value);
int getSize(LinkedList *list);
void cleanup(LinkedList *list);

#endif /* LINKED_LIST_H */