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

#define 国語 "jap_score"
#define 数学 "mat_score"
#define 英語 "eng_score"

Student *createStudent(int id, char name[], int jap_score, int mat_score,
                       int eng_score);
void append(Student *head, Student *newNode);
void display(Student *head);
void total(Student *head);
Student *findMax(Student *head, char subject[]);
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

Student *findMax(Student *head, char subject[]) {
  Student *current = head;
  Student *maxStudent = head;
  int maxScore = 0;

  if (head == NULL)
    return NULL;

  if (strcmp(subject, "jap_score") == 0) {
    maxScore = head->jap_score;
    current = head->next;
    while (current != NULL) {
      if (current->jap_score > maxScore) {
        maxScore = current->jap_score;
        maxStudent = current;
      }
      current = current->next;
    }
  } else if (strcmp(subject, "mat_score") == 0) {
    maxScore = head->mat_score;
    current = head->next;
    while (current != NULL) {
      if (current->mat_score > maxScore) {
        maxScore = current->mat_score;
        maxStudent = current;
      }
      current = current->next;
    }
  } else if (strcmp(subject, "eng_score") == 0) {
    maxScore = head->eng_score;
    current = head->next;
    while (current != NULL) {
      if (current->eng_score > maxScore) {
        maxScore = current->eng_score;
        maxStudent = current;
      }
      current = current->next;
    }
  }

  return maxStudent;
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
  display_one(findMax(head, 国語));

  printf("数学の最高点\n");
  display_one(findMax(head, 数学));

  printf("英語の最高点\n");
  display_one(findMax(head, 英語));

  return 0;
}
