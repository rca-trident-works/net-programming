#include <stdio.h>

int main(int argc, char *argv[]) {
  char str1[] = "Hello";
  char result[100];
  // str1をループで１個ずつ代入
  // with for
  for (int i = 0; str1[i] != '\0'; i++) {
    result[i] = str1[i];
  }

  // with while
  int i = 0;
  while (str1[i] != '\0') {
    result[i] = str1[i];
    i++;
  }

  printf("result: %s\n", result);

  return 0;

  // use while
}
