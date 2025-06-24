#include <stdio.h>

int main(int argc, char const *argv[]) {
  // 異なる方法での初期化
  char astr[] = "Hashimoto";
  char bstr[] = "Yoshimura";
  char *pstr = bstr;

  // 出力する
  printf("%s\n", astr);
  printf("%s\n", bstr);

  // 変更と出力(OK)
  astr[0] = 'K';
  printf("%s\n", astr);

  // 変更と出力(OK)
  pstr[0] = 'K';
  printf("%s\n", pstr);

  return 0;
}
