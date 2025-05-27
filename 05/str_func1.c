#include <stdio.h>

void print(char[]);

int main(int argc, char *argv[]) {
  char hello[] = "Hello, World";

  print(hello);

  return 0;
}

void print(char str[]) {
  for (int i = 0; str[i] != '\0'; i++) {
    printf("str[%02d] : (0x%02x) %c\n", i, str[i], str[i]);
  }

  printf("str : %s\n", str);
}
