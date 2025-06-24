#include <stdio.h>

int main(int argc, char *argv[]) {
  int x = 3;

  if (x) {
    printf("xは0以外です。\n");
  } else {
    printf("xは0です。\n");
  }

  printf("if-else文の後に実行されます。\n");
}
