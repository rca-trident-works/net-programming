#include <stdio.h>

int str2int(char *);

int main(int argc, char *argv[]) {
  char str[20];

  printf("数字を入力してください: ");
  scanf("%19s", str);

  printf("%s => %d\n", str, str2int(str));

  return 0;
}

int str2int(char *s) {
  int n = 0;
  while (*s) {
    if (*s < '0' || *s > '9') {
      return -1; // Return -1 for invalid input
    }
    n = n * 10 + (*s - '0');
    s++;
  }
  return n;
}
