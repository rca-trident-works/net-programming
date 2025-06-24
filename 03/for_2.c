#include <stdio.h>

int main(int argc, char *argv[]) {

  for (int i = 1; i <= 5; i++) {
    printf("%d回目のループです\n", i);
  }

  /* printf("i=%d\n", i);  */ // Error: 'i' is not declared in this scope
  printf("for文の後に実行されます\n");

  return 0;
}
