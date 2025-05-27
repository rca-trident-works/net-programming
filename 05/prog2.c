#include <stdio.h>

void lower_c(char str[]);

int main(int argc, char *argv[]) {

  char str[80];

  printf("文字列を入力してください: ");
  scanf("%s", str);

  lower_c(str);

  printf("%s\n", str);

  return 0;
}

void lower_c(char str[]) {
  int i = 0;
  while (str[i] != '\0') {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = str[i] + ('a' - 'A');
    }
    i++;
  }
}
