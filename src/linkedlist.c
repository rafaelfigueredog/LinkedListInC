#include "linkedlist.h"

void init(LinkedList* list) {
  list->head = NULL;
}

void append(LinkedList* list, int value) {
  Node* newNode = (Node*) malloc(sizeof(Node));
  newNode->value = value;
  newNode->next = NULL;

  if (list->head == NULL) {
    list->head = newNode;
  } else {
    Node* currentNode = list->head;
    while (currentNode->next != NULL) {
      currentNode = currentNode->next;
    }
    currentNode->next = newNode;
  }
}

int get(LinkedList* list, int index) {
  int i = 0;
  Node* currentNode = list->head;
  while (currentNode != NULL && i < index) {
    currentNode = currentNode->next;
    i++;
  }
  if (currentNode != NULL) {
    return currentNode->value;
  }
  return -1;
}

void set(LinkedList* list, int index, int value) {
  int i = 0;
  Node* currentNode = list->head;
  while (currentNode != NULL && i < index) {
    currentNode = currentNode->next;
    i++;
  }
  if (currentNode != NULL) {
    currentNode->value = value;
  }
}

int getSize(LinkedList* list) {
  int size = 0;
  Node* currentNode = list->head;
  while (currentNode != NULL) {
    size++;
    currentNode = currentNode->next;
  }
  return size;
}

void cleanup(LinkedList* list) {
  Node* currentNode = list->head;
  while (currentNode != NULL) {
    Node* nextNode = currentNode->next;
    free(currentNode);
    currentNode = nextNode;
  }
  list->head = NULL;
}