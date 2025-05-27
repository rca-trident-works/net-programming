#include <stdio.h>

int main(int argc, char *argv[]) {
  char str[] = "Hello, World";

  printf("%s\n", str);

  func_str(str);

  printf("%s\n", str);

  return 0;
}

void func_str(char str[]) {
  int i = 0;
  while (str[i] != '\0') {
    str[i++]++;
  }
}
