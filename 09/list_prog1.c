#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
  int id;
  char *name;
  int jap_score;
  int mat_score;
  int eng_score;

  struct Student *next;
} Student;

typedef enum { JAPANESE, MATH, ENGLISH } Subject;

Student *createStudent(int id, char name[], int jap_score, int mat_score,
                       int eng_score);
void append(Student *head, Student *newNode);
void display(Student *head);
void total(Student *head);
Student *findMax(Student *head, Subject subject);
void display_one(Student *head);

void display_one(Student *student) {
  if (student == NULL) {
    printf("該当する学生がいません。\n");
    return;
  }
  printf("No\tName\tJap\tMat\tEng\tCurrent Addr\tNext Addr\n");
  printf("%d\t%s\t%d\t%d\t%d\t%p\t%p\n", student->id, student->name,
         student->jap_score, student->mat_score, student->eng_score, student,
         student->next);
  printf("\n");
}

Student *findMax(Student *head, Subject subject) {
  if (!head)
    return NULL;
  Student *best = head;
  for (Student *cur = head->next; cur; cur = cur->next) {
    int curScore = (subject == JAPANESE) ? cur->jap_score
                   : (subject == MATH)   ? cur->mat_score
                                      : cur->eng_score;
    int bestScore = (subject == JAPANESE) ? best->jap_score
                    : (subject == MATH)   ? best->mat_score
                                       : best->eng_score;
    if (curScore > bestScore)
      best = cur;
  }
  return best;
}

void total(Student *head) {
  Student *current = head;
  // Title
  printf("No\tName\tJap\tMat\tEng\tTotal\tCurrent Addr\tNext Addr\n");
  while (current != NULL) {
    printf("%d\t%s\t%d\t%d\t%d\t%d\t%p\t%p\n", current->id, current->name,
           current->jap_score, current->mat_score, current->eng_score,
           current->jap_score + current->eng_score + current->mat_score,
           current, current->next);
    current = current->next;
  }

  printf("\n");
}

void display(Student *head) {
  Student *current = head;
  // Title
  printf("No\tName\tJap\tMat\tEng\tCurrent Addr\tNext Addr\n");
  while (current != NULL) {
    printf("%d\t%s\t%d\t%d\t%d\t%p\t%p\n", current->id, current->name,
           current->jap_score, current->mat_score, current->eng_score, current,
           current->next);
    current = current->next;
  }

  printf("\n");
}

Student *createStudent(int id, char name[], int jap_score, int mat_score,
                       int eng_score) {
  Student *newNode = (Student *)malloc(sizeof(Student));

  newNode->id = id;
  newNode->name = name;
  newNode->jap_score = jap_score;
  newNode->mat_score = mat_score;
  newNode->eng_score = eng_score;

  return newNode;
}

void append(Student *head, Student *newNode) {
  Student *current = head;
  while (current->next != NULL) {
    current = current->next;
  }
  current->next = newNode;
  newNode->next = NULL;
}

int main(int argc, char const *argv[]) {
  Student *head, *data;

  // データセットを準備
  head = createStudent(1, "Endou", 80, 80, 70);
  data = createStudent(20, "Okita", 60, 95, 50);
  append(head, data);
  data = createStudent(4, "Amano", 70, 70, 70);
  append(head, data);
  data = createStudent(9, "Inoue", 50, 90, 90);
  append(head, data);
  data = createStudent(11, "Ueda", 85, 90, 60);
  append(head, data);

  display(head);

  printf("合計点\n");
  total(head);

  printf("国語の最高点\n");
  display_one(findMax(head, JAPANESE));

  printf("数学の最高点\n");
  display_one(findMax(head, MATH));

  printf("英語の最高点\n");
  display_one(findMax(head, ENGLISH));

  return 0;
}
