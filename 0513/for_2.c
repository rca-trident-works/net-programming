#include <stdio.h>

int main(int argc, char *argv[]) {
  int i = 0;

  for (;;) {
    printf("%d回目のループです\n", i++);
  }

  return 0;
}
