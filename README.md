# Overview
This is an implementation of a singly linked list in C. A linked list is a linear data structure where elements are stored in a sequence, but each element is linked to the next element using a pointer. This implementation uses a single linked list, meaning each node has a pointer to the next node, but not to the previous node.

## Interface
The LinkedList struct represents the linked list. It contains a pointer to the head node of the list.

~~~C
typedef struct node {
  int value;
  struct node* next;
} Node;

typedef struct linked_list {
  Node* head;
} LinkedList;
~~~

## Basic Operations
- `init(LinkedList* list)`: Initializes the linked list by setting the head node to NULL.
- `append(LinkedList* list, int value)`: Appends a new node with the given value to the end of the linked list.
- `get(LinkedList* list, int index)`: Returns the value of the node at the given index. Returns -1 if the index is out of bounds.
- `set(LinkedList* list, int index, int value)`: Sets the value of the node at the given index to the given value.
- `getSize(LinkedList* list)`: Returns the number of nodes in the linked list.
- `cleanup(LinkedList* list)`: Frees the memory used by the linked list.



## Usage
Here is an example program that uses the linked list implementation to store and print some numbers:

~~~C
#include <stdio.h>
#include "linkedlist.h"

int main() {
  LinkedList list;
  init(&list);

  // add some numbers to the list
  append(&list, 42);
  append(&list, 17);
  append(&list, 56);
  append(&list, 23);

  // print the numbers in the list
  int size = getSize(&list);
  for (int i = 0; i < size; i++) {
    int value = get(&list, i);
    printf("%d ", value);
  }
  printf("\n");

  // change the second number in the list
  set(&list, 1, 99);

  // print the numbers in the list again
  size = getSize(&list);
  for (int i = 0; i < size; i++) {
    int value = get(&list, i);
    printf("%d ", value);
  }
  printf("\n");

  cleanup(&list);

  return 0;
~~~
