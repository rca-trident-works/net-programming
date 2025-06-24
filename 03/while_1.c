#include <stdio.h>

int main(int argc, char *argv[]) {
  int i = 1;

  while (i <= 5) {
    printf("%d回目のループです\n", i);
    i++;
  }

  printf("while文の後に実行されます\n");

  return 0;
}
