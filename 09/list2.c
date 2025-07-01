#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

Node *createNode(int);
void append(Node *, Node *);
void display(Node *);
Node* prepend(Node *, Node *);

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
  head = prepend(head, data);

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

Node* prepend(Node *head, Node *data) {
  data->next = head;
  return data;
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
