#include <stdio.h>

int main(int argc, char const *argv[]) {
  // 異なる方法での初期化
  char astr[] = "Hashimoto";
  char *pstr = "Yoshimura";

  // 出力する
  printf("%s\n", astr);
  printf("%s\n", pstr);

  // 変更と出力(OK)
  astr[0] = 'K';
  printf("%s\n", astr);

  // 変更と出力(NG)
  pstr[0] = 'K';
  printf("%s\n", pstr);
  
  return 0;
}
