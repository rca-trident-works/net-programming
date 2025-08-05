#include <stdio.h>
#include <stdlib.h>

typedef struct Student {
  int id;
  char name[20];
  int jap_score;
  int mat_score;
  int eng_score;

  struct Student *next;
} Student;

#define 国語 "jap_score"
#define 数学 "mat_score"
#define 英語 "eng_score"

Student *createStudent(int id, char name[], int jap_score, int mat_score, int eng_score);
void append(Student *head, Student *newNode);
void display(Student *head);
void total(Student *head);
Student *findMax(Student *head, char subject[]);
void display_one(Student *head);

void display(Student *head) {
  Student *current = head;
  // Title
  printf("No\tName\tJap\tMat\tEng\tCurrent Addr\t\tNext Addr\n");
  while(current != NULL) {
    printf("%d\t%s\t%d\t%d\t%d\t%p\t%p\n", current->id, current->name, current->jap_score, current->mat_score, current->eng_score, current, current->next);
    current = current->next;
  }

  printf("\n");
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
