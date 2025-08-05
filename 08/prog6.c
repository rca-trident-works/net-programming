#include <stdio.h>

typedef struct {
  double width;  // 幅
  double height; // 高
} Rectangle;

int calcArea(const Rectangle *rect) {
  return rect->width * rect->height; // 面積を計算
}

int calcPerimeter(const Rectangle *rect) {
  return 2 * (rect->width + rect->height); // 周囲の長さを計算
}

int main() {
  Rectangle rect;
  // 長方形の情報を入力
  printf("長方形の幅を入力してください: ");
  scanf("%lf", &rect.width);
  printf("長方形の高さを入力してください: ");
  scanf("%lf", &rect.height);
  // 面積と周囲の長さを計算
  int area = calcArea(&rect);
  int perimeter = calcPerimeter(&rect);
  // 結果を表示
  printf("面積: %d\n", area);
  printf("周囲の長さ: %d\n", perimeter);
  return 0;
}
