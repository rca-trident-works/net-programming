#include <stdio.h>

int main(int argc, char *argv[]) {
  int i;

  for (i = 1; i <= 5; i++) {
    printf("%d回目のループです。\n", i);
  }

  printf("for文の後に実行されます。\n");
}
