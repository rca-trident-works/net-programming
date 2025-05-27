#include <stdio.h>

int main(int argc, char *argv[]) {
  char str1[] = "Hello";
  char str2[] = "World";

  char concat[100];

  int j = 0;

  // str1をconcatにコピー
  for (int i = 0; str1[i] != '\0'; i++) {
    concat[j++] = str1[i];
  }

  // str2をconcatにコピー
  for (int i = 0; str2[i] != '\0'; i++) {
    concat[j++] = str2[i];
  }

  // 終端記号を付加
  concat[j] = '\0';
  printf("concat: %s\n", concat);

  return 0;
}
