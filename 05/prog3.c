#include <stdio.h>

void lower_c(char str[]);

int main(int argc, char *argv[]) {

  char str[80];

  printf("文字列を入力してください: ");
  scanf("%s", str);

  lower_c(str);

  return 0;
}

void lower_c(char str[]) {
  int i = 0;
  char converted[80];
  while (str[i] != '\0') {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      converted[i] = str[i] + ('a' - 'A');
    } else {
      converted[i] = str[i];
    }
    i++;
  }

  converted[i] = '\0'; // 終端記号を付加
  printf("%s\n", converted);
}
