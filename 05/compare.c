#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  char str1[] = "ABC";
  char str2[] = "ABCD";

  bool match = true;

  for (int i = 0; i < sizeof(str1); i++) {
    if (str1[i] != str2[i]) {
      match = false;
      break;
    }
  }

  if (match) {
    printf("文字列は一致しています。\n");
  } else {
    printf("文字列は一致していません。\n");
  }

  return 0;
}
