#include <stdio.h>

int main(int argc, char *argv[]) {
  char str[] = "Hello, World";

  for (int i = 0; i < sizeof(str); i++) {
    printf("str[%02d] : (0x%02x) %c\n", i, str[i], str[i]);
  }

  printf("str : %s\n", str);

  str[4] = '\0';

  for (int i = 0; i < sizeof(str); i++) {
    printf("str[%02d] : (0x%02x) %c\n", i, str[i], str[i]);
  }

  printf("str : %s\n", str);

  return 0;
}
