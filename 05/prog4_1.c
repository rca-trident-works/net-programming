#include <stdio.h>

void enc_ceasar(char[]);

int main(int argc, char *argv[]) {
  char str[80];

  printf("文字列を入力してください: ");
  scanf("%s", str);

  enc_ceasar(str);

  printf("暗号化完了: %s\n", str);

  return 0;
}

void enc_ceasar(char str[]) {
  int shift = 3; // シフト量
  while (*str) {
    // アルファベットの文字をシフト
    if (*str >= 'a' && *str <= 'z') {
      *str = ((*str - 'a' + shift) % 26) + 'a';
    } else if (*str >= 'A' && *str <= 'Z') {
      *str = ((*str - 'A' + shift) % 26) + 'A';
    }
    str++;
  }
}
