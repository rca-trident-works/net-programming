#include <stdio.h>

int main(int argc, char *argv[]) {
  char c;
  printf("1文字入力してください: ");
  scanf("%c", &c);

  if (c == 'a' || c == 'A') {
    printf("aかAが入力されました\n");
  } else if (c == 'b' || c == 'B' || c == 'c' || c == 'C') {
    printf("b,B,c,Cのどれかが入力されました\n");
  } else {
    printf("a,b以外の文字が入力されました。\n");
  }

  return 0;
}
