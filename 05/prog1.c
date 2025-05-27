#include <stdio.h>

void reverse(char[]);

int main(int argc, char *argv[]) {
  char str[] = "Hello, World!";

  reverse(str);

  return 0;
}

void reverse(char str[]) {
  int len = 0;
  while (str[len] != '\0') {
    len++;
  }

  char reversed[len + 1];

  for (int i = 0; i < len; i++) {
    reversed[i] = str[len - 1 - i];
  }

  printf("%s\n", reversed);
}
