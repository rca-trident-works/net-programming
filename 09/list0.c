#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node *next;
} Node;

void display(Node *head) {
  Node *current = head;
  printf("現在のアドレス\t次のアドレス\t値\n");
  while (current != NULL) {
    printf("%p\t%p\t%d\n", current, current->next, current->data);
    current = current->next;
  }
  printf("\n");
}

Node *createNode(int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

int main(int argc, char const *argv[]) {
  Node *head = NULL;

  head = createNode(100);
  display(head);

  head->next = createNode(200);
  head->next->next = createNode(300);
  head->next->next->next = createNode(400);

  display(head);

  return 0;
}
