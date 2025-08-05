#include <stdio.h>
#include <string.h>

void reverseString(char *str);

int main() {
  char message[] = "Hello, world!";

  printf("Before: %s\n", message);
  reverseString(message);
  printf("After: %s\n", message);

  return 0;
}

void reverseString(char *str) {
  int length = strlen(str);
  for (int i = 0; i < length / 2; i++) {
    char temp = *(str + i);
    *(str + i) = *(str + length - 1 - i);
    *(str + length - 1 - i) = temp;
  }
}
