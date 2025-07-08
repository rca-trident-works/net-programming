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

void append(Student *, Student *);
/* void append_all(Student *, ...); */

int main(int argc, char const *argv[]) {
  Student *head, *data;

  return 0;
}

void append(Student *head, Student *data) {
  
}

