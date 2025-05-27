#include <stdio.h>

int main(int argc, char *argv[]) {
  char str[10] = "abcde";

  for (int i = 0; i < 5; i++) {
    printf("文字:%c 文字コード:0x%02x\n", str[i], str[i]);
  }

  return 0;
}
