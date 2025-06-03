#include <stdio.h>

int main(void) {
  int a = 1234;

  printf("変数aの値は%d\n", a);
  printf("変数aのアドレスは%p\n", (void *)&a);
  printf("main関数のアドレスは%p\n", (void *)&main);

  return 0;
}
