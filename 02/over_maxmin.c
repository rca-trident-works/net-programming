#include <stdio.h>
#include <limits.h>

int main(int argc, char *argv[]) {
  // intの扱える範囲を超えた場合の挙動を示す
  int max = INT_MAX;
  int min = INT_MIN;

  printf("intの最大値: %d\n", max);
  printf("intの最小値: %d\n", min);

  printf("上方オーバーフロー: %d\n", max + 1);
  printf("下方オーバーフロー: %d\n", min - 1);

  return 0;
}
