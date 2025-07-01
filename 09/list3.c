#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node *createNode(int);
void append(Node *, Node *);
void display(Node *);
void prepend(Node **, Node *);
void insert(Node **, Node *, int);

int main(int argc, char const *argv[]) {
  Node *head = NULL;
  Node *data;

  head = createNode(100);
  display(head);

  data = createNode(200);
  append(head, data);

  data = createNode(300);
  append(head, data);

  data = createNode(400);
  prepend(&head, data);

  data = createNode(500);
  insert(&head, data, 300);

  data = createNode(600);
  insert(&head, data, 999);

  display(head);

  return 0;
}

Node *createNode(int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

void append(Node *head, Node *data) {
  Node *current = head;
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = data;
}

void prepend(Node **head, Node *data) {
  data->next = *head;
  *head = data;
}

void insert(Node **head, Node *data, int marker) {
  Node *current = *head;
  Node *prev = NULL;
  // dataがmarkerと一致したらその後に挿入
  // markerが見つからなかった場合は末尾に挿入
  while (current != NULL && current->data != marker) {
    prev = current;
    current = current->next;
  }
  if (current != NULL) {
    data->next = current->next;
    current->next = data;
  } else {
      prev->next = data;
  }
}

void display(Node *head) {
  Node *current = head;
  printf("現在のアドレス\t次のアドレス\t値\n");
  while (current != NULL) {
    printf("%p\t%p\t%d\n", current, current->next, current->data);
    current = current->next;
  }
  printf("\n");
}
